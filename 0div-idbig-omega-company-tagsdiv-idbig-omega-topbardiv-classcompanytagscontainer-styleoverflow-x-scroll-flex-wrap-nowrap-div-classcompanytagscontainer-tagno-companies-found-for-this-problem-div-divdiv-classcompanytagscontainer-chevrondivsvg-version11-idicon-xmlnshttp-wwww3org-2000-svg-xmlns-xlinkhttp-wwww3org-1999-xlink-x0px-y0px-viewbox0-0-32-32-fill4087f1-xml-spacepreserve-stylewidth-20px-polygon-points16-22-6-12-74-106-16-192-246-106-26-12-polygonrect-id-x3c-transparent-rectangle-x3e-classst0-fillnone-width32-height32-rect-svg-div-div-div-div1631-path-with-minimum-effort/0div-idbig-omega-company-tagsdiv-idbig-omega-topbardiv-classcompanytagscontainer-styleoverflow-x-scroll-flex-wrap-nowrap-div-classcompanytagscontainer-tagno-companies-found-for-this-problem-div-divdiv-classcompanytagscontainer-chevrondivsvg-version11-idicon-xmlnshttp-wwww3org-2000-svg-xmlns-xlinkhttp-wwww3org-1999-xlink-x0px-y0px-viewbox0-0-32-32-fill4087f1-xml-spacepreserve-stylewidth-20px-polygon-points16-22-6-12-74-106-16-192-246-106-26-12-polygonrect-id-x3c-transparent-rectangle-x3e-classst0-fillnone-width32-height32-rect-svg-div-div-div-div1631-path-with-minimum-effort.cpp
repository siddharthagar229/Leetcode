class Solution {
public:
    int m,n;
    bool dfs(vector<vector<int>>& heights,vector<vector<bool>> &visited,int x,int y, int pre,int target)
    {
        if(x < 0 || x >= m || y < 0 || y>=n || visited[x][y]) return false; // outrange 
        // if(visited[x][y]) return false; // already visited 
        if(abs(heights[x][y]-pre)> target) return false; // difference is bigger than target 
        if(x == m-1 && y == n-1) return true;  // reach end index
        visited[x][y] = true; // set this index visited
		// 4 direction
        return dfs(heights,visited,x-1,y,heights[x][y],target) || dfs(heights,visited,x+1,y,heights[x][y],target)  
            || dfs(heights,visited,x,y-1,heights[x][y],target) || dfs(heights,visited,x,y+1,heights[x][y],target);
                                                                                                    
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        int l = 0, r = 1e6 - 1; // range 1~ 1e6
        while(l<r)
        {
            vector<vector<bool>> visited(m,vector<bool>(n)); // reset visited matrix every time 
            int mid = (r-l)/2 +l;
            
            if (dfs(heights,visited,0,0,heights[0][0],mid)) r = mid;
            else l = mid + 1;
        }
        return l;
    }
};


/////