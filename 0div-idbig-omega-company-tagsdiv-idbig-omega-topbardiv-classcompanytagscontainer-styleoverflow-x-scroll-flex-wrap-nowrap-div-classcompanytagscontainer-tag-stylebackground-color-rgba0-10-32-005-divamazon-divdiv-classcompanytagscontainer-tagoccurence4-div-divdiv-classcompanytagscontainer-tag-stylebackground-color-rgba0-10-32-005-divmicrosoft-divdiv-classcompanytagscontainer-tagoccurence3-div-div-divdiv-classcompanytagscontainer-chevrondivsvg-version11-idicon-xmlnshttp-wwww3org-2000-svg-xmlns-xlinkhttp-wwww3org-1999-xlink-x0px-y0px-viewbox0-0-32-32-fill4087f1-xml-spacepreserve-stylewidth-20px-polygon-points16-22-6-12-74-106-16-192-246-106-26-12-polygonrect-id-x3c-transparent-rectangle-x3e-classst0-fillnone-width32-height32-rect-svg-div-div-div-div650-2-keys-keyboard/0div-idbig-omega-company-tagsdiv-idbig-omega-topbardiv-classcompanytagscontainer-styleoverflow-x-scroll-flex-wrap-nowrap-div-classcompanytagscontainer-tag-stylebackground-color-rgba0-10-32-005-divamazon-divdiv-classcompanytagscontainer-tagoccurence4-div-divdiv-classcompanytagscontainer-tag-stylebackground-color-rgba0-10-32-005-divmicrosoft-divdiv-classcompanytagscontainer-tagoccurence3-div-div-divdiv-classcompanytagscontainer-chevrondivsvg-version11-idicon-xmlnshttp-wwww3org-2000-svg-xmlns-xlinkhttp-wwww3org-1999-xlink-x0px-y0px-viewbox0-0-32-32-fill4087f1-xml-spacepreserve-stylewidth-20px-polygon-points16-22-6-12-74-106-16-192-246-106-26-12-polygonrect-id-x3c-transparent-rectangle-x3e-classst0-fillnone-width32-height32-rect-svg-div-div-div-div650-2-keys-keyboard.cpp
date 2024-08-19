class Solution {
public:
    int minSteps(int n) {
         
        vector<int>dp(1001,INT_MAX);
        dp[1]=0;
        dp[2]=2;
       for(int i=3;i<=n;i++){
           
           for(int j=2;j<i;j++){
               
               if(i%j==0){
                   dp[i]=min(dp[i],(i/j)+dp[j]);
               }
           }
           dp[i]=min(dp[i],i);
       }
        return dp[n];
    }
};