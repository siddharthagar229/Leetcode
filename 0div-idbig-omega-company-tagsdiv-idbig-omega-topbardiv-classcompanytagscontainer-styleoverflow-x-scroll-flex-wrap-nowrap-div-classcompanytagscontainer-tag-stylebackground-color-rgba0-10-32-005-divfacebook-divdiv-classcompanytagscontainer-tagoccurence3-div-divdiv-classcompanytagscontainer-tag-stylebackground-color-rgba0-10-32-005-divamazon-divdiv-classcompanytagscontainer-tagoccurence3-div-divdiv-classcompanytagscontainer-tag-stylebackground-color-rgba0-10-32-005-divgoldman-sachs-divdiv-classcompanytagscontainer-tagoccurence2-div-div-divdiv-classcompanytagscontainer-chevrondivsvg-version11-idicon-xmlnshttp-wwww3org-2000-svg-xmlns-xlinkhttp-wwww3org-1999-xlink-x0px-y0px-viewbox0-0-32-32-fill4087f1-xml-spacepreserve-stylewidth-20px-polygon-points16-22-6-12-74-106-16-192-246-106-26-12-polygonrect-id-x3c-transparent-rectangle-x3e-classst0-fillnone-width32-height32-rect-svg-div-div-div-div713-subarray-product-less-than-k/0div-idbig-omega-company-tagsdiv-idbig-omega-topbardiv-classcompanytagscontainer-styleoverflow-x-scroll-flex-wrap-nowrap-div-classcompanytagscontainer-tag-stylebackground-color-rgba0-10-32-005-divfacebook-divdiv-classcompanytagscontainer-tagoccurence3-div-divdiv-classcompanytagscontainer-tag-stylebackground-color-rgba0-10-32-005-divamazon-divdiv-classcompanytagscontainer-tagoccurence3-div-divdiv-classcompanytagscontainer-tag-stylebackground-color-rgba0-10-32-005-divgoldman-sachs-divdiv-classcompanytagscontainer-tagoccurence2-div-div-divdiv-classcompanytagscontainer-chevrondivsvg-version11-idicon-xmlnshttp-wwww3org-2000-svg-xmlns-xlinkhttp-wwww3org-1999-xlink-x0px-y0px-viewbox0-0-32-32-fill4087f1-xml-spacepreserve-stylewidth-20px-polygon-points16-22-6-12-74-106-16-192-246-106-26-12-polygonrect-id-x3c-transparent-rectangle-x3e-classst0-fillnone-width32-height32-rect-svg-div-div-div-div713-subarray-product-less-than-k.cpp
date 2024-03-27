class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long i=0,ans=0,prod=1;

        for(int j=0;j<nums.size();j++){
            prod = prod*nums[j];
        
            while(prod>=k && i<=j){
                prod = prod/nums[i];
                i++;
            }
            ans = ans + (j-i+1);
        }
        return ans;
    }
};