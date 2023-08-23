class Solution {
public:
    string reorganizeString(string s) {
        string ans;
        
        unordered_map<char,int> mp;
        for(char ch:s)
            mp[ch]++;
        
        if(mp.size() < 2)
        {
            int x;
            for(auto it:mp){
                x=it.second;
            }
            // auto it=mp.second;
            if(x>1) return ans;
            return s;
            
        }
           
        
        priority_queue<pair<int,char>> pq;
        for(auto it : mp)
            pq.push({it.second,it.first});
        
        while(pq.size()>1) {
            char ch1 = pq.top().second;
            int count1 = pq.top().first;
            ans.push_back(ch1);
            count1--;
            pq.pop();
            
            char ch2 = pq.top().second;
            int count2 = pq.top().first;
            ans.push_back(ch2);
            count2--;
            pq.pop();
            
            if(count1>0) pq.push({count1,ch1});
            if(count2>0) pq.push({count2,ch2});
        }
        
        if(!pq.empty() && pq.top().first>1) {
            ans.clear();
        }
        if(!pq.empty() && pq.top().first == 1) {
            ans += pq.top().second;
        }
        return ans;
    }
};