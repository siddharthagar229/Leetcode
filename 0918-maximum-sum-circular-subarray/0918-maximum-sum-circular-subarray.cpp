class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int totalSum = 0, minSum = 0,maxSum = 0, maxSubArray = INT_MIN, minSubArray = INT_MAX;
        for(auto num : nums){
            totalSum += num;
            minSum += num;
            maxSum += num;
            maxSubArray = max(maxSubArray,maxSum);
            if(maxSum < 0){
                maxSum = 0;
            }
            minSubArray = min(minSubArray,minSum);
            if(minSum > 0){
                minSum = 0;
            }
        }
        return (totalSum == minSubArray) ? maxSubArray:max(maxSubArray,totalSum - minSubArray);
        
    }
};