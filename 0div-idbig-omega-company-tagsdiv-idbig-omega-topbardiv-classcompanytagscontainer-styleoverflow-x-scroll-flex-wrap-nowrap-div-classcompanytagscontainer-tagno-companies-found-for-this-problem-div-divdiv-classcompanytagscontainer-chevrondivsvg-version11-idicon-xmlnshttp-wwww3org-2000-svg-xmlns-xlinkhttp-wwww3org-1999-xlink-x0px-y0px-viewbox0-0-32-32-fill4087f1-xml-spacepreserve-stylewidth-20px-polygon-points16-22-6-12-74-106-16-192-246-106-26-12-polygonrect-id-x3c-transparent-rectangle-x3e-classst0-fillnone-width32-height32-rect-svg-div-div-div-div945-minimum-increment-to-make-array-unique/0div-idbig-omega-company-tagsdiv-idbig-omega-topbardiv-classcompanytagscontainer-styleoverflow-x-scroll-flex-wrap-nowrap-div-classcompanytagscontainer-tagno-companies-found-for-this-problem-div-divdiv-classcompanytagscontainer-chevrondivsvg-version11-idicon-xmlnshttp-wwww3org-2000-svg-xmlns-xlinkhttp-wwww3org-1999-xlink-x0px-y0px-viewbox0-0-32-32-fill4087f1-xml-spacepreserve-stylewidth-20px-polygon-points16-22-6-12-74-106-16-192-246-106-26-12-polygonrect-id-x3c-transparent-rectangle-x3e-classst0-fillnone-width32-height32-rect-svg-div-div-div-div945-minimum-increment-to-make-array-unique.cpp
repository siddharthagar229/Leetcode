class Solution {
public:
    int minIncrementForUnique(vector<int>& a) {
        
          sort(a.begin(),a.end());
        int n = a.size();
        int res = 0;
        for(int i=1;i<n;i++)
        {
            if(a[i] <= a[i-1])
            {
                int increment = a[i - 1] - a[i] + 1;
                a[i] += increment;
                res += increment;
            }
        }
        return res;
        
    }
};