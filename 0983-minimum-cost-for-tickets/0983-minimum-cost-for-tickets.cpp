class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
         int max = days[days.size() - 1];
        set<int> s;
        for(auto i : days)
            s.insert(i);
        vector<int> dp (max+1,0);
        for(int i = 1; i < dp.size(); i++) {
                int c1 = dp[i - 1] ;
                int c7 = (i - 7) > 0 ? dp[i - 7] : 0;
                int c30 = (i - 30) > 0 ? dp[i - 30] : 0;
                if(s.count(i))
                    dp[i] = min(c1 + costs[0], min(c7 + costs[1], c30 + costs[2]));
                else
                    dp[i] = dp[i-1];
        }
        return dp[dp.size() - 1];
        
        
        
    }
};