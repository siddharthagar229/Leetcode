
class Solution {
public:
    bool evaluateTree(TreeNode* root) {

       if(!root) return false;

        evaluateTree(root->left);

        evaluateTree(root->right);

        if(root->left && root->right){
           
        if(root->val == 3){

            root->val = (root->left->val && root->right->val);

        }

        else{
           
        root->val = (root->left->val || root->right->val);
          
        }

        }

        
        return root->val;
        

        
    }
};