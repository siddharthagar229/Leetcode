class Solution {
public:
    int lcs(string& s1, string& s2, int n ,  int m , int& totalSum) {
        vector<vector<int>> dp = vector<vector<int>>(n+1 ,vector<int>(m+1 , 0));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++ ) {
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = (int) s1[i-1] +dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
                
            }
        }
        return totalSum - 2*dp[n][m];
    }
    
 
    int minimumDeleteSum(string s1, string s2) {
        int ts = 0;
        for(auto x : s1 ) {
            ts += (int)x;
        }
        for(auto x : s2 ) {
            ts += (int)x;
        }
        return lcs(s1 ,s2 , s1.size() , s2.size(), ts);

    }
};
