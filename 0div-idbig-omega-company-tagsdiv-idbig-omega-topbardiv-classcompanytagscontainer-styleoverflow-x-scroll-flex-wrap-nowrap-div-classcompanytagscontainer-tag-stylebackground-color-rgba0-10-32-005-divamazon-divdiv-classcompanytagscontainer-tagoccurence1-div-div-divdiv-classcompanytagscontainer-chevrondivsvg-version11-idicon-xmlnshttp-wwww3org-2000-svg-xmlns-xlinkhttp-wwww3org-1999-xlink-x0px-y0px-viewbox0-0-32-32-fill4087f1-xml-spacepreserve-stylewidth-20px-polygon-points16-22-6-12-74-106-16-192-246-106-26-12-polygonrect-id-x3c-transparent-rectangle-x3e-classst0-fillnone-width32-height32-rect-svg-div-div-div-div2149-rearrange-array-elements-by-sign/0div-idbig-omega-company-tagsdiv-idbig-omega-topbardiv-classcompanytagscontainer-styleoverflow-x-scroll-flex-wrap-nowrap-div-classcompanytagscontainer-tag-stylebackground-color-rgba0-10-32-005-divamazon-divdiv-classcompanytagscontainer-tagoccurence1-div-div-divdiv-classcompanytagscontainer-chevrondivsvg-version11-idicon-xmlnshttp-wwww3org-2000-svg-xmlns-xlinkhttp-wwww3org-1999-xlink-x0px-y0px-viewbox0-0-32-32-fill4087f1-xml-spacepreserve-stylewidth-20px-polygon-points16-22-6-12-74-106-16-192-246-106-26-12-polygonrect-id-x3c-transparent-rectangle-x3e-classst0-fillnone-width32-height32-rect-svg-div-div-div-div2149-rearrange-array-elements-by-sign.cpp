class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
         int odd=0,even=1;
        vector<int> temp=nums;
        for(auto& val: temp){
            if(val>0){
                nums[odd]=val,odd+=2;
            } else{
                 nums[even]=val,even+=2;
            }
        }
        return nums;
        
    }
};