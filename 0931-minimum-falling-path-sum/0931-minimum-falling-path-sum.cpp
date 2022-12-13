class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
    int c=matrix[0].size();
    
    for(int i=1;i<=r-1;i++){
        for(int j=0;j<c;j++){
            if(j==0)
                matrix[i][j]+=min(matrix[i-1][j+1],matrix[i-1][j]);
            else if(j==c-1)
                matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j-1]);
            else 
                matrix[i][j]+=min(matrix[i-1][j-1],min(matrix[i-1][j],matrix[i-1][j+1]));
        }
    }
    
    return *min_element(matrix[r-1].begin(),matrix[r-1].end());
    }
};