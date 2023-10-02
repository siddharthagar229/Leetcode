class Solution {
public:
    int cnt = 0;
    int n,m;
    
    
    bool dfs(vector<vector<int>>&grid,int i,int j){
        if(i>=n || j>=m || grid[i][j] == 0) return false;
        if(i == n-1 and j==m-1){
            return true;
        }

        grid[i][j] = 0;
        return dfs(grid,i+1,j) || dfs(grid,i,j+1);
    }

    

    bool isPossibleToCutPath(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        if(grid[0][0] == 0 ) return true;
        int ans = 0;
        ans = dfs(grid,0,0);
        grid[0][0] = 1;
        ans += dfs(grid,0,0);
        return ans<2;
    }
};