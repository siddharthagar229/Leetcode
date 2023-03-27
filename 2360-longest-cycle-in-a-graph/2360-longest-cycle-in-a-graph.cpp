// class Solution {
// public:
//     void dfs(int node,vector<int>&edges,vector<bool>&vis,vector<bool>&extra,vector<int>&dist,int &ans,int distance){
//         if(node!=-1){
//             if(!vis[node]){
//                 vis[node]=true;
//                 extra[node]=true;
//                 dist[node]=distance;
//                 dfs(edges[node],edges,vis,extra,dist,ans,distance+1);
//             }
//             else if(extra[node]){
//                 ans=max(ans,distance-dist[node]);
//             }
//             extra[node]=false;
//         }
//     }
//     int longestCycle(vector<int>& edges) {
//         vector<bool>vis(edges.size(),false);
//         vector<bool>extra(edges.size(),false);
//         vector<int>dist(edges.size(),0);
//         int ans=-1;
//         for(int i=0;i<edges.size();i++){
//             if(!vis[i]){
//                 dfs(i,edges,vis,extra,dist,ans,0);
//             }
//         }
//         return ans;
//     }
// };




class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> visit(n);
        vector<int> indegree(n);

        // Count indegree of each node.
        for (int edge : edges) {
            if (edge != -1) {
                indegree[edge]++;
            }
        }

        // Kahn's algorithm starts.
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            visit[node] = true;
            int neighbor = edges[node];
            if (neighbor != -1) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        // Kahn's algorithm ends.

        int answer = -1;
        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                int neighbor = edges[i];
                int count = 1;
                visit[i] = true;
                // Iterate in the cycle.
                while (neighbor != i) {
                    visit[neighbor] = true;
                    count++;
                    neighbor = edges[neighbor];
                }
                answer = max(answer, count);
            }
        }

        return answer;
    }
};