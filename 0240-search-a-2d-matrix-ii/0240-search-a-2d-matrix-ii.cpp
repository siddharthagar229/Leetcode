class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int t) {
          int i = 0;
        int j = A[0].size()-1;
        
        while(i<A.size() && j>=0){
            if(A[i][j] == t)
                return true;
            
            if(t<A[i][j])
                j--;
            else
                i++;
        
        }
        return false;
    }
};