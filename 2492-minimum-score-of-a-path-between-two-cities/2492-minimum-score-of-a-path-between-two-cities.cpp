class Solution {
public:
    int minScore(int n, vector<vector<int>>& r) {
        
         vector<pair<int, int>> g[n+1];
        vector<bool> vis(n+1, false);
        
        for(auto x: r){
            g[x[0]].push_back({x[1], x[2]});
            g[x[1]].push_back({x[0], x[2]});
        }
        
        queue<int> q;
        q.push(1);
        int ans = INT_MAX;
        
        while(q.size()){
            int t = q.front();
            q.pop();
            vis[t] = true;
            
            for(int i=0; i<g[t].size(); i++){
                ans = min(ans, g[t][i].second);
                int next = g[t][i].first;
                if(vis[next]) continue;
                else q.push(next);
            }
        }
        
        return ans;
        
    }
};