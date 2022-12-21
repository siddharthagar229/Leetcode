class Solution {
public:
    
    bool dfs(vector<vector<int>>& graph, int iroot, vector<int>& color)
    {
        int top_node_color = color[iroot]; 
        for(int i=0; i< graph[iroot].size(); i++)
        {
            int next_node = graph[iroot][i];
            if(color[next_node]==-1)
            {
                color[next_node] = !(top_node_color); 
                if(dfs(graph, next_node, color)==false)
                    return false; 
            }
            else if(color[next_node] == top_node_color)
                return false;             
        }
        
        return true; 
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
         vector<int> color(n, -1);
        
        vector<vector<int>> graph(n); 
        // build graph
        for(int i=0; i< dislikes.size(); i++ )
        {
            graph[dislikes[i][0]-1].push_back(dislikes[i][1]-1); 
            graph[dislikes[i][1]-1].push_back(dislikes[i][0]-1);             
        }
        for(int i=0; i< n; i++ )
        {
            if(color[i]==-1)
            {
                color[i] = 1;                 
                if(dfs(graph, i, color)==false)
                    return false; 
//                if(bfs(graph, i, color)==false)
//                    return false; 
            }
        }
        return true; 
    }
};