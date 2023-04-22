class Solution {
public:
    int minInsertions(string s) {
         if (s.size() < 2) return 0;
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; ++i) {
            dp[i][i] = 0;
        }
        for (int j = 1; j < s.size(); ++j) {
            for (int i = j - 1; i >= 0; --i) {
                if (s[i] != s[j]) dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
                else dp[i][j] = j - i > 1 ? dp[i+1][j-1] : 0;
                                     
            }
        }
        return dp[0][s.size() - 1];
    }
};