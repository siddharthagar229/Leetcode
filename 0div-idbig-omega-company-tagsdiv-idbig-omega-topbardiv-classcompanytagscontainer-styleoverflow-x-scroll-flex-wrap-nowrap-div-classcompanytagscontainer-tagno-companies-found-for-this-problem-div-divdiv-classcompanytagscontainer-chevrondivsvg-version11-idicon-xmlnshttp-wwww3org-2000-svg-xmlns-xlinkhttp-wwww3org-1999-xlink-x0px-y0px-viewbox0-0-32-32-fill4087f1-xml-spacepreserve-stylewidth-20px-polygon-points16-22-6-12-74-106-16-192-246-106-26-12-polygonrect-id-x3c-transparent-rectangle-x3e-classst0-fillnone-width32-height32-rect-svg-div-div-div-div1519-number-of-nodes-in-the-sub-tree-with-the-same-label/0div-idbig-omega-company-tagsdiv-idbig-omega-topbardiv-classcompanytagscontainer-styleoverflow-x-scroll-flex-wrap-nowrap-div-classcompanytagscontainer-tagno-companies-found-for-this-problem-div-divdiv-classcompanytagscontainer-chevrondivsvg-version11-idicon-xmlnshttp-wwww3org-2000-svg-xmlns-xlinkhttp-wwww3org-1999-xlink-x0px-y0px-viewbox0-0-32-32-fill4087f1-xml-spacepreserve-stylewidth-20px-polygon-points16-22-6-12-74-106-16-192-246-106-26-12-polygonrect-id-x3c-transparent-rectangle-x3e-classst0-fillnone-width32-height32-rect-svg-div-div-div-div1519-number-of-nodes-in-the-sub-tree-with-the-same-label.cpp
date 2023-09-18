class Solution {
public:
    vector<int>dfs(vector<vector<int>>&adj,int curr,int parent,vector<int>&result,string &labels){
        vector<int>my_count(26,0);
        int mylabel=labels[curr];
        my_count[mylabel- 'a']=1;

        for(auto& child:adj[curr]){
            if(child==parent) continue;
            vector<int>child_count(26,0);
            child_count=dfs(adj,child,curr,result,labels);

            for(int i=0;i<26;i++){
                my_count[i]+=child_count[i];
            }
        }
        result[curr]=my_count[mylabel-'a'];
        return my_count;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        for(auto& it: edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        vector<int>result(n,0);

        dfs(adj,0,-1,result,labels);
        return result;
    }
};