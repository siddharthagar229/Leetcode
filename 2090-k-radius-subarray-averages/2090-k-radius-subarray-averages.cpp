class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> arr(nums.size(), -1);
        long long sum = 0;
        for(int i=0; i<nums.size() && i<2*k ; i++){
            sum += nums[i];
        }

        int len = 2*k + 1;

        for(int i=k; i<n-k; i++){
            sum = sum + nums[i+k];
            arr[i] = sum / len;
            sum = sum - nums[i-k];
        }

        return arr;
        
    }
};