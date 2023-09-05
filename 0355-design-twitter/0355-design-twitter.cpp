class Twitter {
public:
    unordered_map<int,set<int>>mp;
    int count;
    priority_queue<vector<int>>pq;
    Twitter() {
        count=0;
    }
    
    void postTweet(int userId, int tweetId) {
        pq.push({count,userId,tweetId});
        count++;
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>ans;
        int i=0;
        priority_queue<vector<int>>tweet=pq;
        while(i!=10 && tweet.size()!=0){
            int user=tweet.top()[1];
            int message=tweet.top()[2];
            tweet.pop();
            if(user==userId || mp[userId].find(user)!=mp[userId].end()){
                ans.push_back(message);
                  i++;
            }
        }

        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        mp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(followeeId);
    }
};