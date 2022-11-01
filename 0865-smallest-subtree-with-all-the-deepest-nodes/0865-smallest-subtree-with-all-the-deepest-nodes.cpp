class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return NULL;
        if (root==p || root==q) return root;
        TreeNode *l = lowestCommonAncestor(root->left,p,q);
        TreeNode *r = lowestCommonAncestor(root->right,p,q);
        if (l&&r) return root;
        if (l) return l;
        return r;
    }
    
    vector<vector<TreeNode*>> bfs(TreeNode* root) {
        vector<vector<TreeNode*>> ret;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int currlen = q.size();
            vector<TreeNode*> row;
            for (int i=0; i<currlen; i++) {
                auto curr = q.front(); q.pop();
                row.push_back(curr);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            ret.push_back(row);
        }
        return ret;
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        vector<vector<TreeNode*>> level = bfs(root);
        vector<TreeNode*> tmp = level.back();
        if (tmp.size()==1) return tmp[0];
        return lowestCommonAncestor(root, tmp[0], tmp.back());
    }
};