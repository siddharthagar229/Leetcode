class Solution {
public:
    vector<int> item;
    vector<vector<int>> st;
    int n,k;
    void backTrack(int f,vector<int> &curr,vector<int> &nums)
    {
        if(curr.size()==k)
        {
            st.push_back(curr);
            return;
        }
        for(int i=f;i<n;i++)
        {
            curr.push_back(nums[i]);
            backTrack(i+1,curr,nums);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        n=nums.size();
        for(k=0;k<n+1;k++)
        {
            backTrack(0,item,nums);
        }
        return st;
    }
};