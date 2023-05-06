class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
         int n = nums.size();
       sort(begin(nums),end(nums));
       int l = 0,r=n-1,count=0,mod=1e9+7;
        vector<int> pows(n, 1);
        for (int i = 1 ; i < n ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        while(l<=r){
         if(nums[l]+nums[r]>target){
              r--;
         }
         else{
               count = (count + pows[r - l]) % mod;
         l++;
         }
       }
       return count%mod;
    }
};