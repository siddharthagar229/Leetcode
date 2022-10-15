class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
      
        vector<int> indegree(n,0);
        
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int> ans;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(auto v:adj[u])
            {
                indegree[v]--;
                
                if(indegree[v]==0)
                    q.push(v);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]!=0)
                return {};
        }
    return ans;
    }
};