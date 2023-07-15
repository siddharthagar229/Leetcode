class Solution {
public:

    int solve(vector<vector<int>> &nums,int idx,int k,vector<vector<int>> &dp){
        if(idx==nums.size() || k==0){
            return 0;
        }
        if(dp[idx][k]!=-1){
            return dp[idx][k];
        }
    // We can either take an element or nottake an element
        int nottake=solve(nums,idx+1,k,dp);
        int take=nums[idx][2];
        int endnew=nums[idx][1];
        int newidx=idx+1;
        while(newidx<nums.size() && k>=1){
            if(nums[newidx][0]<=endnew){
                newidx++;
            }
            else break;
        }
        take+=solve(nums,newidx,k-1,dp);
        return dp[idx][k]=max(take,nottake);
    }

    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        int n=events.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return solve(events,0,k,dp);


    }
};