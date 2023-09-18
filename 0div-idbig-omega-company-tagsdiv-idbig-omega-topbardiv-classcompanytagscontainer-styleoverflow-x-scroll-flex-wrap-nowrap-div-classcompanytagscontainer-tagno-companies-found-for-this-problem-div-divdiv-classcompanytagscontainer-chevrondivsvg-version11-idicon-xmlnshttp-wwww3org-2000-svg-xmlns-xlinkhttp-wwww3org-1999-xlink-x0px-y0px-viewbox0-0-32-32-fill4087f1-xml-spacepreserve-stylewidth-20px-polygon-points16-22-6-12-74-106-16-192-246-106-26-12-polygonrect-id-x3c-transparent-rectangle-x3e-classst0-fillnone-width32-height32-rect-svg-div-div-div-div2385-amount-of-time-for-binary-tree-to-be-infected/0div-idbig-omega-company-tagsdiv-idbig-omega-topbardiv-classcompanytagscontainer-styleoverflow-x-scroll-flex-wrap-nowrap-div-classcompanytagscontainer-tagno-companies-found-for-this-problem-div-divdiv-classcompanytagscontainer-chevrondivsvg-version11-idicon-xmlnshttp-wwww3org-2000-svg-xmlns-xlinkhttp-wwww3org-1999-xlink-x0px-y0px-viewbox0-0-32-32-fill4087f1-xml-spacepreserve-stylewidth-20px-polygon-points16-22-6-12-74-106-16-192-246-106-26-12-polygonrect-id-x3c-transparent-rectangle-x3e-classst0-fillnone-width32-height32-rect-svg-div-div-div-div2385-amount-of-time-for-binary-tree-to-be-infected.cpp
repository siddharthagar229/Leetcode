#define um unordered_map
#define pb push_back

class Solution {
public:
    
    
    void build(TreeNode* root, um<int, vector<int>>& graph){
        if (root->left){
            graph[root->val].pb(root->left->val);
            graph[root->left->val].pb(root->val);
            build(root->left, graph);
        }
        if (root->right){
            graph[root->val].pb(root->right->val);
            graph[root->right->val].pb(root->val);
            build(root->right, graph);
        }
    }
    
    
    int amountOfTime(TreeNode* root, int start) {
        um<int, vector<int>> graph;
        um<int, bool> visited;
        build(root, graph);

        int minute = 0;
        queue<int> q;
        q.push(start);
        while (!q.empty()){
            int n = q.size();
            while (n--){
                int curr = q.front();
                q.pop();
                visited[curr] = true;
                for (auto x : graph[curr]){
                    if (!visited[x])
                        q.push(x);
                }
            }
            
            minute += 1;
        
        }
        
        return minute - 1;
        
    }
};