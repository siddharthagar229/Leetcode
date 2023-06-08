class Solution {
public:
    int helper(vector<int>& v)
    {
        int ans=0;
        int l=0, h=v.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(v[mid]<0)
            {
                ans=v.size()-mid;
                h=mid-1;
            }
            else if(v[mid]>=0)
            {
                l=mid+1;
            }
        }
        return ans;
    }
    int countNegatives(vector<vector<int>>& grid)
    {
        int count=0;
        int n= grid.size();
        for(int i=0;i<n;i++)
        {
            count+=(helper(grid[i]));
        }
        return count;
    }
};