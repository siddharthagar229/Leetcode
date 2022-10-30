class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
        int result=0, l=-1, r=-1;
        for (int i=0; i<nums.size(); i++) {
            if(nums[i]>right){
                l=i;
                r=i;
                continue;
            }
            if(nums[i]>=left){
                r=i;
            }
            result+=r-l;
        }
        return result;
        
    }
};