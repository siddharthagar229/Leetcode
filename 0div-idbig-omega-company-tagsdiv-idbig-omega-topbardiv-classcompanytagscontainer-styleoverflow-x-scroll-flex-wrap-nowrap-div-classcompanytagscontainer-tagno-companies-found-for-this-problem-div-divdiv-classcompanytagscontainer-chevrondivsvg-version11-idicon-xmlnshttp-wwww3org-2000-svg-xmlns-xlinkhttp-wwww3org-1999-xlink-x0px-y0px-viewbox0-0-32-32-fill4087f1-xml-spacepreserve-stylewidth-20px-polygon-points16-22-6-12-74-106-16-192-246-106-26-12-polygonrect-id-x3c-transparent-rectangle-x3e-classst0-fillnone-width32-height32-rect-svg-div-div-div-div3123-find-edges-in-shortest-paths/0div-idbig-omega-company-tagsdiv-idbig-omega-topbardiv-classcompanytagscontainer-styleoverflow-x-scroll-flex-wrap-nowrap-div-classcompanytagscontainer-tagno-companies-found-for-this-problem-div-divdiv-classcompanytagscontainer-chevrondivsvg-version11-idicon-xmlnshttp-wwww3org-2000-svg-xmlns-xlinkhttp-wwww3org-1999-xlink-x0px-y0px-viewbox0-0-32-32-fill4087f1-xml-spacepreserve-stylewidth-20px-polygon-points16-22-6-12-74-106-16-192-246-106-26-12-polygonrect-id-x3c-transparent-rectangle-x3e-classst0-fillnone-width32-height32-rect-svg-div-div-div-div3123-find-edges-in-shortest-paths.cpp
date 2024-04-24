class Solution {
public:
    
    vector<int> dikstra(vector<pair<int, int>> adj[], int n, int src){
        
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> distance(n,INT_MAX);
        
        distance[src] = 0;
        pq.push({0,src});
        
        while(!pq.empty()){
            auto f = pq.top();
            pq.pop();
            int d = f.first;
            int node = f.second;
            
            for(auto it : adj[node]){
                int adjNode = it.first;
                int newD = it.second + d;
                
                if(newD < distance[adjNode]){
                    pq.push({newD, adjNode});
                    distance[adjNode] = newD;
                }
            }
        }
        
        return distance;
    }
    
    vector<bool> findAnswer(int n, vector<vector<int>>& edges) {
        int m = edges.size();
        vector<pair<int, int>> adj[n];
        vector<bool> ans(m,0);
        
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        vector<int> start = dikstra(adj, n, 0);
        vector<int> end = dikstra(adj, n, n-1);
        
        int minDist = start[n-1]; // can take end[0] as well
        

        for (int i = 0; i < m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            if(start[u]==INT_MAX || start[v]==INT_MAX) continue;
            if(end[u]==INT_MAX || end[v]==INT_MAX) continue;
            
            // start->u->v->end
            // then take minDistance of start to u + minDistance of end to v + (u,v) edge weight
            if(start[u]+end[v]+w == minDist)
                ans[i]=1; 
            
            
            // start->v->u->end
            // then take minDistance of start to v + minDistance of end to u + (u,v) edge weight
            if(start[v]+end[u]+w == minDist)
                ans[i]=1; 
        }
        
        return ans;
    }
};