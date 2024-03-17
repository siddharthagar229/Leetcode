class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ni) {


                int n = a.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (ni[1] < a[i][0]) // if interval to be merged is less than interval in array
            {
                ans.push_back(ni);
                for (; i < n; i++)
                {
                    ans.push_back(a[i]);
                }
                return ans;
            }
            else if (a[i][1] < ni[0]) // If current interval is before newInterval
                ans.push_back(a[i]);
            else
            {
                ni[0] = min(ni[0], a[i][0]);
                ni[1] = max(ni[1], a[i][1]);
            }
        }
        ans.push_back(ni);
        return ans;
        
        
        
    }
};