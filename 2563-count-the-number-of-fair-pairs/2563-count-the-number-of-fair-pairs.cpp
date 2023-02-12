class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        
        
         sort(begin(nums),end(nums));
        int n=nums.size();
        int i=0;
        int j=n-1;
       long long int c1=0;
       long long int c2=0;
       while(i<j)
       {
           if(nums[i]+nums[j]<=upper){
               c1+=j-i;
               i++;
           }
           else j--;
       }
       i=0;
       j=n-1;
       while(i<j)
       {
           if(nums[i]+nums[j]<lower){
               c2+=j-i;
               i++;
           }
           else j--; 
       }
       return c1-c2;
        
        
        
    }
};