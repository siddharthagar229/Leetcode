class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
         int n = nums.size();
    
        //take all valid numbers to their valid index 
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
                swap(nums[i], nums[nums[i]-1]);
            }
        }

        //now find answer according to values at particular indexes
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]){
                return i+1;
            }
        }

        //if nothing found till now return the maximum answer possible
        return n+1;
        
    }
};