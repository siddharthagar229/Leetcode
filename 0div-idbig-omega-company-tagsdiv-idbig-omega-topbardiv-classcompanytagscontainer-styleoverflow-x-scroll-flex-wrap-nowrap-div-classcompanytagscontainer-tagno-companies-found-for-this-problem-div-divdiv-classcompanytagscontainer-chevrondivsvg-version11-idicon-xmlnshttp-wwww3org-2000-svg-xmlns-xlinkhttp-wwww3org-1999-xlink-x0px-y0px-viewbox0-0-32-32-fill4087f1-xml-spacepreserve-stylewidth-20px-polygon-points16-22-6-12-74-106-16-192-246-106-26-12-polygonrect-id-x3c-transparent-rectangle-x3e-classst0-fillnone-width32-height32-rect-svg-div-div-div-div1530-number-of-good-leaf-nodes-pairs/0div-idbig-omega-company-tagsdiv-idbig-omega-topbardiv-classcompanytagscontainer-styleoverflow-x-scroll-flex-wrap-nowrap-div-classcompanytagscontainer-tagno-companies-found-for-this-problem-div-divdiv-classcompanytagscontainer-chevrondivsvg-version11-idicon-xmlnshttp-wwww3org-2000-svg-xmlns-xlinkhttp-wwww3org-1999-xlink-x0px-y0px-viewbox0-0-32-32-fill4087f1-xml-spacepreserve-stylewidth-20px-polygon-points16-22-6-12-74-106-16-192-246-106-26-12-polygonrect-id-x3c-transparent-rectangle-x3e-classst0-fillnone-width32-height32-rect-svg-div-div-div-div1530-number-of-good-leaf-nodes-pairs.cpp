class Solution {
    int ans = 0;
    vector<int> solve(TreeNode* root, int distance) {
        if(!root) return {};
        if((!root->left) && (!root->right)) return {1};
        vector<int> l = solve(root->left, distance);
        vector<int> r = solve(root->right, distance);
        for(auto& n1 : l) {
            for(auto& n2 : r) {
                if((n1 + n2) <= distance) ans++;
            }
        }
        vector<int> ret;
        for(auto n : l) ret.push_back(n+1);
        for(auto n : r) ret.push_back(n+1);
        return ret;
    }
public:
    int countPairs(TreeNode* root, int distance) {
        solve(root, distance);
        return ans;    
    }
};