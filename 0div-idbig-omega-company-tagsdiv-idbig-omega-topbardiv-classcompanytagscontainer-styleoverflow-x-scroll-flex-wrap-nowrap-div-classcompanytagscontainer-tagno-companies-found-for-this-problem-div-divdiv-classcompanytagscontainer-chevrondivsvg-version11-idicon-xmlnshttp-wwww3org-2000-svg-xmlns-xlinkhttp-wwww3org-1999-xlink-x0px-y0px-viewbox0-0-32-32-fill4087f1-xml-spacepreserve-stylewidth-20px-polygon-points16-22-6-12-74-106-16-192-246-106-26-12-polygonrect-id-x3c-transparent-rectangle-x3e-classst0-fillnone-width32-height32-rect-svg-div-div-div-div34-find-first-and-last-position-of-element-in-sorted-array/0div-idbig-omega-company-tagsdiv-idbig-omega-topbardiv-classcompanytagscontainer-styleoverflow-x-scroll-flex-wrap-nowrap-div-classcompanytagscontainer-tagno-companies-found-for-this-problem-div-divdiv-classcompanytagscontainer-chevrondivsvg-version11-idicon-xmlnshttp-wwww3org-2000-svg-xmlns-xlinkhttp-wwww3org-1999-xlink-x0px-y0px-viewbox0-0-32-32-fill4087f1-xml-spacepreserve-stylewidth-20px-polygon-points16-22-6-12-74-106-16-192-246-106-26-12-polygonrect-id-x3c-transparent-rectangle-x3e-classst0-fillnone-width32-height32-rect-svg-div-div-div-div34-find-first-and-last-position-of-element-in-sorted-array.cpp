class Solution {
public:
    int firstpos(vector<int>nums,int target){
        int fpos=-1;
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
               fpos=mid;    
                end=mid-1;   
            }
            else if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return fpos;
    }
     int lastpos(vector<int>nums,int target){
        int lpos=-1;
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
               lpos=mid;    
                start=mid+1;   
            }
            else if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return lpos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>res(2,-1);
        int n=nums.size();
       if(n==0)
           return res;
       int fpos= firstpos(nums, target);
       int lpos= lastpos(nums, target);
       res[0]=fpos;
       res[1]=lpos;
       return res; 
    }
};