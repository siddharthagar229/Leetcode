class Solution {
public:
    vector<int> minEdgeReversals(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto &i : edges) {
            adj[i[0]].push_back({i[1], 0});
            adj[i[1]].push_back({i[0], 1});
        }
        vector<int> ans(n);
        /*
            We will calculate the minimum number of edge reversals required to 
            traverse all nodes from node 0
            which will be represented by ans[0]
        */
        function<void(int,int)> f = [&](int curr, int par) {
            for(auto [next, wt] : adj[curr]) {
                if(next == par) continue;
                ans[0] += wt;
                f(next, curr);
            }
        };
        f(0, -1);

        /*
            Now imagine a child node of the node 0
            What will the required number of edge reversals to traverse all nodes
            from that node? 
            
            If it is directly connected to the node 0 i.e the edge need not be reversed,
            then it will cost ans[0] + 1 since the cost to travel to node 0 will be 1
            
            Else, the cose will be ans[0] - 1, since the previous cost of reversing
            the edge to travel to that node from node 0 is no longer required
        */
        function<void(int,int)> dfs = [&](int curr, int par) {
            for(auto [next, wt] : adj[curr]) {
                if(next == par) continue;
                ans[next] = ans[curr] + (wt == 1 ? -1 : 1);
                dfs(next, curr);
            }
        };
        dfs(0, -1);

        return ans;
    }
};