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
    TreeNode* tmp;
    void inorder(TreeNode *root)
    {
        if(root==NULL) return ;
        inorder(root->left);
        tmp->right=root;
        root->left=NULL;
        tmp=root;
     inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) 
    {
        TreeNode* dummy=new TreeNode(0);
         tmp=dummy;
        inorder(root);
        return dummy->right;
    }
};