class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,j=mat.size()-1;
      
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][i];
            sum+=mat[i][j];
            if(i==j)
            {
                sum-=mat[i][i];
            }
            j--;
            
            
            
        }return sum;
    }
};