class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> v;
        int i=0,j=n;
        while(j<nums.size())
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;
            j++;
        }
        return v;
        
    }
};