
class Solution {
public:
    void swap(TreeNode* root){
        if(!root){
            return ;
        }
        
        swap(root->left);
        swap(root->right);
        
        TreeNode* t;
        t=root->left;
        root->left= root->right;
        root->right=t;
        
    }
    
    
    
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
        
    }
};


