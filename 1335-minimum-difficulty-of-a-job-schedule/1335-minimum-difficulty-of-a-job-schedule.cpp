class Solution {
public:
    // int t[301][11];
    int solve(vector<int>& mat, int n, int idx, int d,vector<vector<int>>& dp) {
        if(d == 1)
            return *max_element(begin(mat)+idx, end(mat));
        
        if(dp[d][idx] != -1)
            return dp[d][idx];
    
        
        int res = INT_MAX;
        // int result = INT_MAX;
        int mx=0;
        
        for(int i = idx; i<n-d+1; i++) {
            mx = max(mx, mat[i]);
            res = min(res, mx + solve(mat, n, i+1, d-1,dp));
        }
        return dp[d][idx] = res;
    }
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n < d)
            return -1;
        // memset(t, -1, sizeof(t));
        vector<vector<int>> dp(d+1, vector<int>(n,-1));
        return solve(jobDifficulty, n, 0, d,dp);
    }
};