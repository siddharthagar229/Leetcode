class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()<=1){
            if(nums.size()==1&&nums[0]==target)return 0;
            return -1;
        }
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]>nums[end]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        if(nums[end]==target)return end;
       if(end>=0){
           if(end>0&&target>=nums[0]&&target<=nums[end-1]){
           start=0;
       }
           else{
            start=end;
            end=nums.size()-1;
               
        }
       }
        if(nums[end]==target)return end;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};