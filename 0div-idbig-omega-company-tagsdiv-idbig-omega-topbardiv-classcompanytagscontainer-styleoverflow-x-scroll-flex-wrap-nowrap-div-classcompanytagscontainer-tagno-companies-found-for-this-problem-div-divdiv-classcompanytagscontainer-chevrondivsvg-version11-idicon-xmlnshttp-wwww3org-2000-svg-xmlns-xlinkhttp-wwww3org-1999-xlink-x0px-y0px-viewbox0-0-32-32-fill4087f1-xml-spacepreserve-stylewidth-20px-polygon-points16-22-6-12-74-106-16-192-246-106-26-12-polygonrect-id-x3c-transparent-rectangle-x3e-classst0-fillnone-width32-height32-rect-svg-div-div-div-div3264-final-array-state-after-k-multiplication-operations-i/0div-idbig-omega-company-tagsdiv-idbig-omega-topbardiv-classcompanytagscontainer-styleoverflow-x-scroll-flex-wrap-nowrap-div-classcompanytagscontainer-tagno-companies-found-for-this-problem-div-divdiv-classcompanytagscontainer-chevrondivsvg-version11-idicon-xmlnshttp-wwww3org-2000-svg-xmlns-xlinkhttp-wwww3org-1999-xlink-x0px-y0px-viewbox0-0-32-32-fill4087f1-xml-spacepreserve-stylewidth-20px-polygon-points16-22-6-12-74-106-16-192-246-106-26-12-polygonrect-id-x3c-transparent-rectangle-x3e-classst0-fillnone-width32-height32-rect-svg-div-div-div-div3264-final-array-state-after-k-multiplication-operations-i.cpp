class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int idx = -1, mini = INT_MAX;
            for(int i = 0; i < nums.size(); i++){
                if(mini > nums[i]){
                    mini = nums[i];
                    idx = i;
                }
            }
            nums[idx] *= multiplier;
        }
        return nums;
    }
};