class Solution {
public:
    int dfs(vector<int>adj[],vector<int>&in,int r)
    {
        // vis[r]=1;
        int ans=in[r],z=0;
        for(auto it:adj[r])
            z=max(z,dfs(adj,in,it));
        return z+ans;
        
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int>adj[n];
        int root;
        for(int i=0;i<n;i++)
        {
            if(manager[i]==-1)
                root=i;
            else
                adj[manager[i]].push_back(i);
        }
        return dfs(adj,informTime,root);
    }
};