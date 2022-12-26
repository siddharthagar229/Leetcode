class Solution {
public:
    bool canJump(vector<int>& A) {
        
         int n = A.size();
        int reachable = 0;
        
        for(int i=0;i<n;++i)
        {
            if(reachable < i)
                return false;
            reachable = max(reachable,i+A[i]);
        }
        return true;        
        
    }
};