class Solution {
public:
    string longestPalindrome(string s) {
        
         int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for(int i=0; i<n; i++){
            dp[i][i] = true;
            if (i<n-1){
                dp[i][i+1] = s[i] == s[i+1];
            }
        }
        for(int i=3; i<=n; i++){
            for(int j=0; j<=n-i; j++){
                dp[j][j+i-1] = dp[j+1][j+i-2] && s[j] == s[j+i-1];
            }
        }
        int ans[] = {0, 0};
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=i; j--){
                if (dp[i][j]){
                    if (ans[0]<j-i+1){
                        ans[0] = j-i+1;
                        ans[1] = i;
                    }
                    break;
                }
            }
        }
        return s.substr(ans[1], ans[0]);
        
    }
};