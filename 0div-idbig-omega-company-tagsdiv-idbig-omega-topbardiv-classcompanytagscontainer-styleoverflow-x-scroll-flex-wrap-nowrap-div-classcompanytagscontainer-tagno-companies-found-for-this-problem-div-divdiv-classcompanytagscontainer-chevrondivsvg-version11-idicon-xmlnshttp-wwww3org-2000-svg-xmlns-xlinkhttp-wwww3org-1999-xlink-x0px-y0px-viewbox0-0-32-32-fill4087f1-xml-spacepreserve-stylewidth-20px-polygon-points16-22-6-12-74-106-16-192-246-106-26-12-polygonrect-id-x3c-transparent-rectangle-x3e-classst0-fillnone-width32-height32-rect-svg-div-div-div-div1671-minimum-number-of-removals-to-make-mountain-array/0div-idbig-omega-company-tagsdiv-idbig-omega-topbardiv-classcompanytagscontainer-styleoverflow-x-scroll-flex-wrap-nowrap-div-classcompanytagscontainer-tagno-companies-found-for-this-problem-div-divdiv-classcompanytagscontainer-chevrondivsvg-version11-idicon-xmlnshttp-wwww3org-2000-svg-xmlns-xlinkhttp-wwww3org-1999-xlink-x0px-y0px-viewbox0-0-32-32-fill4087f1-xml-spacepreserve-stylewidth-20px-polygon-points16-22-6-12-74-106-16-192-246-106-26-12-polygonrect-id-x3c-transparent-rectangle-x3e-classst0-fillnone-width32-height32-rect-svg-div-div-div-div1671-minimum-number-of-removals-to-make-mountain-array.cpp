class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();

        // LONGEST INCREASING SUBSEQUENCE (LIS)
        int lis[n];
        lis[0]=1;
        for(int i=1 ; i<n ; i++){
            int max_end_here = 0;
            for(int j=0 ; j<i ; j++){
                if(nums[i] > nums[j]){
                    max_end_here = max(max_end_here , lis[j]);
                }
            }
            lis[i] = max_end_here +1;
        }

        // LONGEST DECREASING SUBSEQUENCE (LDS)
        int lds[n];
        lds[n-1]=1;
        for(int i=n-2 ; i>=0 ; i--){
            int max_start_here =0 ;
            for(int j=i+1 ; j<n ; j++){
                if(nums[i] > nums[j]){
                    max_start_here = max(max_start_here , lds[j]);
                }
            }
            lds[i] = max_start_here+1;
        }

        // finding length of LONGEST BITONIC SUBSEQUENCE (LBS)
        int lbs =INT_MIN;
        for(int i=0 ; i<n ; i++){
            // Check there are both LIS and LDS for an element.
            if(lis[i]>1 && lds[i]>1)
                lbs = max(lbs , lis[i]+lds[i]-1);
        }

        // Minimum number of removals required
        return n-lbs;

    }
};