class Solution {
public:
    bool isvalid(vector<int>&nums,int mid,int k)
    {
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
           k-=(nums[i]/mid);
            if(nums[i]%mid==0)k++;
        }
        
        return k>=0;
        
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
      long long int l=1,r=INT_MAX,mid,x;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(isvalid(nums,mid,maxOperations))
            {
                x=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return x;
    }
};