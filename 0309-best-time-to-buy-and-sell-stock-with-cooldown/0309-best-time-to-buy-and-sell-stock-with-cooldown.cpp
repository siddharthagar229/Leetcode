class Solution {
    vector<vector<int>> dp;
    int n;
    int dfs(int i, int type, vector<int>& prices){
        if(i >= n)
            return 0;
        
        if(dp[i][type] != -1)
            return dp[i][type];

        if(type == 0)  // Buy
            dp[i][type] = max(dfs(i+1, 1, prices), dfs(i+1,3, prices)) - prices[i];
        else if(type == 1) // Sell
            dp[i][type] = dfs(i+1, 2, prices) + prices[i];
        else if(type == 2)  // CoolDown
            dp[i][type] = max(dfs(i+1, 0, prices), dfs(i+1, 2, prices));
        else                // Break
            dp[i][type] = max(dfs(i+1, 1, prices), dfs(i+1, 3, prices));
        
        return dp[i][type];
    }
public:
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        dp = vector<vector<int>>(n, vector<int>(4, -1));

        return max(dfs(0, 0, prices), dfs(0, 2, prices));
    }
};