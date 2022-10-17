class Solution {
public:
    int maxProduct(vector<int>& nums) {
            
        int maxx, curr_max, curr_min;
        
        maxx = nums[0]; curr_max = nums[0]; curr_min = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            
            int p = curr_max*nums[i], q = curr_min*nums[i];
            
            curr_max = max(p, max(q, nums[i]));
            curr_min = min(p, min(q, nums[i]));
            
            maxx = max(maxx, curr_max);
        }
        
        return maxx;
    }
};