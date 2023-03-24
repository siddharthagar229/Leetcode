class Solution {
public:
    int ans = 0;
    void dfs(int node,vector<bool>& v,map<vector<int>,bool>& mp,unordered_map<int,vector<int>>& grp){
        v[node] = 1;
        for(auto nbr:grp[node]){
            if(!v[nbr]){
                if(mp.find({node,nbr}) != mp.end()){
                    ans++;
                }
                dfs(nbr,v,mp,grp);
            }
        }
        return;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        map<vector<int>,bool> mp;
        unordered_map<int,vector<int>> grp;
        for(int i = 0;i < connections.size();i++){
            mp[connections[i]] = 1;
            grp[connections[i][0]].push_back(connections[i][1]);
            grp[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> visited(n,0);
        dfs(0,visited,mp,grp);
        return ans;
    }
};