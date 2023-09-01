class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> ans(n+1, 0); 
        for (int x = 1; x <= n; ++x) 
            ans[x] = 1 + ans[x&(x-1)];
        return ans; 
    }
};