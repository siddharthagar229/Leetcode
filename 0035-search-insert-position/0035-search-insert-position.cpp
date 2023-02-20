class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
          int low = 0;
        int high = nums.size()-1;
        while(low <= high)
        {
            int mid=low+(high-low)/2;
             //checks the target that is present in array
            if(nums[mid]==target)
                return mid;
			//check the target that is not present in array for that we have to return its ordered index where it would be
            if (nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
        
    }
};