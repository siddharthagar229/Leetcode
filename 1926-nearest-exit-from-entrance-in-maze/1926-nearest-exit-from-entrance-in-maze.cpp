class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int ans=0,n=maze.size(),m=maze[0].size();
        queue<vector<int>>q;
        q.push(entrance);
        maze[entrance[0]][entrance[1]]='+'; // marking entrance as visited or we can say wall
        
        while(!q.empty())
        {
            int size=q.size();
              while(size--)
               {  
                  vector<int>a=q.front();  
                  q.pop();
                  int i=a[0],j=a[1]; //initialising the row and column with the current position 
                  // if entrance is not the exit and any exit point condition satisfies -->return steps
                  if((a[0]!=entrance[0]||a[1]!=entrance[1])&&(a[0]==0||a[1]==0||a[0]==n-1||a[1]==m-1))
                  return ans; 
                  // all 4 possible movements
                  //if possible add it to the queue and mark as visited
                  if(i>0&&maze[i-1][j]=='.')
                    {
                       maze[i-1][j]='+'; 
                       q.push({i-1,j});
                    }
                  
                  if(j>0&&maze[i][j-1]=='.')
                    {
                       maze[i][j-1]='+';
                       q.push({i,j-1});
                    }
                  
                  if(i<n-1&&maze[i+1][j]=='.')
                    {
                       maze[i+1][j]='+';
                       q.push({i+1,j});
                    }
                  
                  if(j<m-1&&maze[i][j+1]=='.')
                    {
                       maze[i][j+1]='+';
                       q.push({i,j+1});
                    }
                }
            ans++;  // total number of steps at each level of bfs 
        }
        return -1;
        
    }
};