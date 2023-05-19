class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size(); 
        vector<int> visit(n, -1);
        
        for(int i=0; i< n; i++)
        {
            if(visit[i]==-1)
            {
                if(bfs(graph, i, visit)==false)
                    return false; 
            }            
        }
        return true;         
    }
    
    bool bfs(vector<vector<int>>& graph, int root, vector<int>& visit)
    {
        queue<int> que; 
        que.push(root); 
        visit[root] =0; 
        
        while(que.size())
        {
            int iSize = que.size(); 
            for(int i=0; i< iSize; i++)
            {
               int topNode = que.front();
               int topColor = visit[topNode];  
                que.pop(); 
                for(int j=0; j< graph[topNode].size(); j++)
                {
                    int nextNode = graph[topNode][j]; 
                    if(visit[nextNode]==visit[topNode])
                        return false; 
                    if(visit[nextNode]==-1)
                    {
                        visit[nextNode] = !topColor; 
                        que.push(nextNode); 
                    }
                }                    
            }            
        }        
        return true;                 
    }
};