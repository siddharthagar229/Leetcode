class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
         int n=difficulty.size();
        int m=worker.size();
         int cnt=0;
        vector<pair<int,int>>data;

        for(int i=0;i<n;i++)
        data.push_back({difficulty[i],profit[i]});

        sort(data.begin(),data.end());
        priority_queue<int>pq;

        sort(worker.begin(),worker.end());
        int j=0;
        for(int i=0;i<m;i++)
        {
            while(j<n && worker[i]>=data[j].first)
            {
                pq.push(data[j].second);
                j++;
            }
            if(!pq.empty())
            cnt+=pq.top();
        }
        return cnt;
        
        
    }
};