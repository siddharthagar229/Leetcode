class Solution {
public:
    int dp[200][200] ;
    
    int DFS(int m,int n,int x,int y,vector<vector<int>>& grid)
    {
        if( x>=m || y>=n )
            return INT_MAX ;
        
        if( dp[x][y] != 0 )
            return dp[x][y] ;
        
        if( x == m-1 && y == n-1 )
            return grid[x][y] ;
        
        dp[x][y] = grid[x][y] + min( DFS(m,n,x+1,y,grid) , DFS(m,n,x,y+1,grid) ) ;
        
        return dp[x][y] ;
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size() ;
        int n = grid[0].size() ;
        
        memset(dp,0,sizeof(dp)) ;
        
        return DFS(m,n,0,0,grid) ;
        
    }
    
    
};