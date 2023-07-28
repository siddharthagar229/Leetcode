class Solution {
public:
    int recursion(vector<int> &nums,int i,int j,vector<vector<int>> &dp)

    {

        if(i>j)

            return 0;
    if(dp[i][j]!=-1) return dp[i][j];

        int choice1= nums[i]+min(recursion(nums,i+2,j,dp),recursion(nums,i+1,j-1,dp));

        int choice2= nums[j]+min(recursion(nums,i+1,j-1,dp),recursion(nums,i,j-2,dp));

        return dp[i][j]=max(choice1,choice2);

    }

    bool PredictTheWinner(vector<int>& nums) 

    {
        
        int n=nums.size();
// int dp[n][n];
//         memset(dp,-1,sizeof(dp));
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int bestScore= recursion(nums,0,n-1,dp);

        int sum=0;

        for(int i=0;i<n;i++) sum+=nums[i];

        if(bestScore>=sum-bestScore)

            return true;

        return false;

    }
};