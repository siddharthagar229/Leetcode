class Solution {
public:
    TreeNode* buildTree(vector<pair<int, int>>& preorder, int& idx, int currDepth) {
        if (idx >= preorder.size() || preorder[idx].second != currDepth)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[idx].first);
        idx++;

        root->left = buildTree(preorder, idx, currDepth + 1);
        root->right = buildTree(preorder, idx, currDepth + 1);

        return root;
    }
    TreeNode* recoverFromPreorder(string t) {
        vector<pair<int, int>> preorder;
        int i = 0;
        while (i < t.size()) {
            int value = 0;
            int depth = 0;
            while (i < t.size() && t[i] == '-') {
                depth++;
                i++;
            }
            while (i < t.size() && isdigit(t[i])) {
                value = value * 10 + (t[i] - '0');
                i++;
            }
            preorder.push_back({ value, depth });
        }
        int idx = 0;
        TreeNode* root = buildTree(preorder, idx, 0);
        return root;
    }
};