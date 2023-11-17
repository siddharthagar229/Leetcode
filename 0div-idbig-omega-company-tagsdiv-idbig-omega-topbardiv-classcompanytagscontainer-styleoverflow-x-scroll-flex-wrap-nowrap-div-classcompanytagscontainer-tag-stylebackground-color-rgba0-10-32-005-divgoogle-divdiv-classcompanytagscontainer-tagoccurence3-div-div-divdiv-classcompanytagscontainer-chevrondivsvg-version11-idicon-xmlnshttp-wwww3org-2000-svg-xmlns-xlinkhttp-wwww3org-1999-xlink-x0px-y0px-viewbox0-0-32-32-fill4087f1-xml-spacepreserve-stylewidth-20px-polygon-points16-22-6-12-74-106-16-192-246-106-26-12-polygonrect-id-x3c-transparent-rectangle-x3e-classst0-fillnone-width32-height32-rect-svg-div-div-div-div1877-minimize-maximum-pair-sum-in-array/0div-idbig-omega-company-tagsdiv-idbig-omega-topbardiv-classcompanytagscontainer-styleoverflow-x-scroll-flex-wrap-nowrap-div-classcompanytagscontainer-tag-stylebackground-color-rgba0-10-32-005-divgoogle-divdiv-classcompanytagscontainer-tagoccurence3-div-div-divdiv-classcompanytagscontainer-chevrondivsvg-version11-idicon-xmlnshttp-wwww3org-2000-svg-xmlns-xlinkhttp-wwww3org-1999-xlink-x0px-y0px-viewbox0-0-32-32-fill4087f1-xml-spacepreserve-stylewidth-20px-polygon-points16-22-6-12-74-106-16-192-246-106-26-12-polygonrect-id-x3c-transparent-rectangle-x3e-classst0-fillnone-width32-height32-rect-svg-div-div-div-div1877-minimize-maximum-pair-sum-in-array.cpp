class Solution {
public:
    int minPairSum(vector<int>& nums) {
          // to get minimized maximum pair sum 
        
        // we should pair the largest element with the smallest element and so on
        
        // consider :: [3, 5, 4, 2, 4, 6]
        
        // on sorting : [2, 3, 4, 4, 5, 6]
        
        // max pair sum would be minimized when we pair 1 from front and 1 from back
        
        // ie max((2, 6), (3, 5), (4, 4)) = (8, 8, 8) == 8
        
        sort(nums.begin(), nums.end());
        
        // for array of size 4 --> we need to pair A[1] with A[2] 
        // i will go till ((4 / 2) - 1)
        
        int maxSum = -1;
        for(int i = 0; i < (nums.size() / 2); i++) {
            maxSum = max(maxSum, nums[i] + nums[nums.size() - 1- i]);
        }
            
        return maxSum;
    }
};