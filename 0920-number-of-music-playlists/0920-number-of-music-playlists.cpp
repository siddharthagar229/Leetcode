class Solution {
public:
    const int MOD = 1000000007;
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<long long>>dp(n+1,vector<long long>(goal+1,0));
        //length of playlist , no of unique songs
        dp[0][0] = 1; // length = 0 , unique song = 0 => empty playlist
        // dp[i][0] = 0 // as if we have some length then there should be song present
        // so this case caanot have any playlist made so we assign 0 to it
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=goal;j++)
            {
                dp[i][j] = dp[i-1][j-1]*(n-i+1) %MOD;
                if(i>k)
                {
                    dp[i][j] = (dp[i][j]+dp[i][j-1]*(i-k)%MOD)%MOD;
                }
            }
        }
        return dp[n][goal];
    }
};