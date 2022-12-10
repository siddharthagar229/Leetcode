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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
         return lca(root);
    }
    
    TreeNode* lca(TreeNode* root){
        if(!root) return NULL;
        int l=height(root->left); //height of left subtree
        int r=height(root->right); //height of right subtree
        
        //we want to go in the direction which is deepest to find the answer
        //if l==r then we found our solution.
        
        if(l==r) return root;         
        else if(l>r) return lca(root->left);
        return lca(root->right);
    }
    
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
     }
};