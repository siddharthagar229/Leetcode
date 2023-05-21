class Solution {
public:
   void dfs1(int i,int j,vector<vector<int>>& grid){
        if(i<0||j<0||i>=grid.size()||j>=grid.size()||grid[i][j]==0||grid[i][j]==2) return ;
        grid[i][j]=2;
        dfs1(i+1,j,grid);
        dfs1(i-1,j,grid);
        dfs1(i,j-1,grid);
        dfs1(i,j+1,grid);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int s=grid.size();
        int c=0,i,j;
        for(i=0;i<s;i++){
            for( j=0;j<s;j++){
                if(grid[i][j]==1) {c=1;break;}
            }
            
            if(c==1) break;
        }
        
            
        // int ans=107;
        dfs1(i,j,grid);
        int minflip=INT_MAX;
        vector<pair<int, int>>v1, v2;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                
                if(grid[i][j]==1){
                    v1.push_back({i, j}); 
                }
                else if(grid[i][j]==2){
                    v2.push_back({i, j}); 
                }
            }
        }
        
        for(int i=0; i<v1.size(); i++){
            
            for(int j=0; j<v2.size(); j++){
                
                minflip=min(minflip, abs(v1[i].first-v2[j].first)+abs(v1[i].second-v2[j].second)-1);
            }
        }
        return minflip;
    }
};