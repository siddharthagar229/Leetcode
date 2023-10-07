class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int>key(n, 1e9);
        vector<int>parent(n, -1);
        vector<bool>mst(n, false);
        key[0] = 0;
        for(int i = 0; i < n - 1; i++) {
            int mini = 1e9, u;
            for(int j = 0; j < n; j++) {
                if(mini > key[j] && mst[j] == false) {
                    mini = key[j];
                    u = j;
                }
            }
            
            
            mst[u] = true;
            for(int v = 0; v < n; v++) {
                int dist = abs(points[u][0] - points[v][0]) + abs(points[u][1] - points[v][1]);
                if(mst[v] == false && dist < key[v]) {
                    parent[v] = u;
                    key[v] = dist;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans+=key[i];
        }
        return ans;
    }
};