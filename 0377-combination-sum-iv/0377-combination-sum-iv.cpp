class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp (target + 1);
        dp[0] = 1;
        for (int t = 1; t <= target; t++) {
            for (int& num : nums) {
                if (t - num >= 0) {
                    if (dp[t] <= INT_MAX - dp[t - num])
                        dp[t] += dp[t - num];
                    else
                        dp[t] = INT_MAX;
                }
            }
        }
        return dp[target];
    }
};