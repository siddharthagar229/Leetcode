/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool traverse(TreeNode* root, int prevSum, int targetSum) {
        if (!root) {
            return false;
        }
        if (root->val + prevSum == targetSum && !root->left && !root->right) {
            return true;
        }
        bool left = traverse(root->left, root->val + prevSum, targetSum);
        bool right = traverse(root->right, root->val + prevSum, targetSum);
        return (left || right);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverse(root, 0, targetSum);
    }
};