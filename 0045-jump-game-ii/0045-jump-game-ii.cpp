class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jump=0,curreach=0,curmax=0;
        
        for(int i=0;i<n-1;i++){
            if(i+nums[i]>curmax){
                curmax=i+nums[i];
            }
            
            if(i==curreach){
                jump++;
                curreach=curmax;
            }
        }
        
        return jump;
        
    }
};