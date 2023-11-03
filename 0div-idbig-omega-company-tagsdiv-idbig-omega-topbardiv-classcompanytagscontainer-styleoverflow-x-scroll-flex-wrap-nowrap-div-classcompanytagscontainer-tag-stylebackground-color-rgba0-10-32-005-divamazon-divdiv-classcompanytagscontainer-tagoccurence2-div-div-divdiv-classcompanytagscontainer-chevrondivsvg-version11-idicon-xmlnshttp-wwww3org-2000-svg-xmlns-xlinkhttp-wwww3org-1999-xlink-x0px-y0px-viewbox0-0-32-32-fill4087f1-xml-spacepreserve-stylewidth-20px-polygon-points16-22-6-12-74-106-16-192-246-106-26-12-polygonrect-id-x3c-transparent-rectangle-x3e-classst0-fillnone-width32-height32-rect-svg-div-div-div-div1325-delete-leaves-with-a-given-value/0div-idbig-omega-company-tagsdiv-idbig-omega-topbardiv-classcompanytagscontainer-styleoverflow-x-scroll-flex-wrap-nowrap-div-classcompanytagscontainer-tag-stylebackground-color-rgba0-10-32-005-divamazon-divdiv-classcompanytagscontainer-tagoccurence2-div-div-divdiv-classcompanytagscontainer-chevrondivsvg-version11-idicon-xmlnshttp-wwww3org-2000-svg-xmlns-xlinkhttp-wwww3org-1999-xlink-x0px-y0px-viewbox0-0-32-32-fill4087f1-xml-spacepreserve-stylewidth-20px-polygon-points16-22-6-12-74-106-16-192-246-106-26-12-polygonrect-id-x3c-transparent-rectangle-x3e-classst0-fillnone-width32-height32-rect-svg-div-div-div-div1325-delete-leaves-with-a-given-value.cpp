


class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
           if(!root) return NULL;
        // if(!root->left && !root->right){
        //     if(root->val==target){
        //        return NULL; 
        //     }
        //     return root;
        // }
        root->left=removeLeafNodes(root->left,target);
        root->right=removeLeafNodes(root->right,target);
        if(!root->right && !root->left && root->val==target) return NULL;
         if(!root->right && !root->left && root->val!=target) return root;
        return root;
    }
};