class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid.empty()) return 0;
        
        int tot=0, cnt=0, time=0;
        queue<pair<int,int>>pq;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) pq.push({i,j});
            }
        }
        
          int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        while(!pq.empty()){
            int k=pq.size();
            cnt+=k;
            while(k--){
                
               int x = pq.front().first, y = pq.front().second;
                pq.pop();
                for(int i = 0; i < 4; ++i){
                    int nx = x + dx[i], ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= grid.size() || ny >=grid[0].size() || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    pq.push({nx, ny});
                }
            }
            
            if(!pq.empty())time++;
        }
        
        return tot==cnt? time : -1;
        
    }
};