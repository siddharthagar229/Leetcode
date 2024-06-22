class Solution {
public:
    int subArray(vector<int>& nums, int k) {
        int count = 0, ans = 0, start = 0, end = 0;
        int n = nums.size();
        while(end<n){
            if(nums[end]%2==1){
                count++;
            }
            while(count>k){
                if(nums[start]%2==1){
                    count--;
                }
                start++;
            }
            ans += end-start+1;
            end++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      // return subArray(nums, k) - subArray(nums, k - 1);
        
         int c = 0, ans = 0, i= 0, j = 0;
        int n = nums.size();
        while(j<n){
            if(nums[j]%2!=0){
                c=0;
                k--;
            }
            while(k==0){
                if(nums[i]%2!=0){
                    k++;
                }
                c++;
                i++;
            }
            ans+=c;
            j++;
           
        }
        return ans;
    }
};