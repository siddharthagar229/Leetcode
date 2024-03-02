class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = (int)nums.size() - 1;
        int t = r;
        vector<int> ans(r+1 );
        while(l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                ans[t--] = nums[l] * nums[l++];
            } else {
                ans[t--] = nums[r] * nums[r--];
            }
        }
        return ans;
    }
};