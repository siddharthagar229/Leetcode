class Solution {
public:
     bool dfs( vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i ,int j){
        if( i < 0 || i >= grid1.size() || j < 0 || j >= grid2[0].size() || grid2[i][j]!=1 ){
            return true;
        }
        // if( grid2[i][j] == 0 ){
        //     return true;
        // }
        if(grid1[i][j] != grid2[i][j] ){ // sub island not possible
            return false;
        }
        
        grid2[i][j] = 0; // marking the true cases as well as visited
        
        bool top = dfs(grid1, grid2 , i-1 ,j );
        bool left = dfs(grid1, grid2 , i ,j-1 );
        bool right = dfs(grid1, grid2 , i ,j+1 );
        bool bottom = dfs(grid1, grid2 , i+1 ,j );
        
        return top && left && right && bottom;
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int m = grid1.size(), n = grid1[0].size();
        int cnt =0;
        for(int i=0 ; i < m; i++ ){
            for(int j=0 ; j< n; j++ ){
                if(grid2[i][j] == 1 && grid1[i][j] == 1 ){
                    if( dfs(grid1 ,grid2 , i , j )){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
        
        }
    
   
};