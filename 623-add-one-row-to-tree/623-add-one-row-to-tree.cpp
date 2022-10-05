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
    
      void insert(TreeNode* node, int val, int depth, int currentDepth) {
        if(node == NULL) return;
        if(depth-1 == currentDepth) {
            TreeNode* t = node->left;
            node->left = new TreeNode(val);
            node->left->left = t;
            t = node->right;
            node->right = new TreeNode(val);
            node->right->right = t;
        }
        else {
            insert(node->left, val, depth, currentDepth+1);
            insert(node->right, val, depth, currentDepth+1);
        }
    }
    
    
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
                if(d == 1){
            TreeNode* node = new TreeNode(v);
            node->left = root;
            return node;
        }
        insert(root,v,d,1);
        return root;
        
    }
};