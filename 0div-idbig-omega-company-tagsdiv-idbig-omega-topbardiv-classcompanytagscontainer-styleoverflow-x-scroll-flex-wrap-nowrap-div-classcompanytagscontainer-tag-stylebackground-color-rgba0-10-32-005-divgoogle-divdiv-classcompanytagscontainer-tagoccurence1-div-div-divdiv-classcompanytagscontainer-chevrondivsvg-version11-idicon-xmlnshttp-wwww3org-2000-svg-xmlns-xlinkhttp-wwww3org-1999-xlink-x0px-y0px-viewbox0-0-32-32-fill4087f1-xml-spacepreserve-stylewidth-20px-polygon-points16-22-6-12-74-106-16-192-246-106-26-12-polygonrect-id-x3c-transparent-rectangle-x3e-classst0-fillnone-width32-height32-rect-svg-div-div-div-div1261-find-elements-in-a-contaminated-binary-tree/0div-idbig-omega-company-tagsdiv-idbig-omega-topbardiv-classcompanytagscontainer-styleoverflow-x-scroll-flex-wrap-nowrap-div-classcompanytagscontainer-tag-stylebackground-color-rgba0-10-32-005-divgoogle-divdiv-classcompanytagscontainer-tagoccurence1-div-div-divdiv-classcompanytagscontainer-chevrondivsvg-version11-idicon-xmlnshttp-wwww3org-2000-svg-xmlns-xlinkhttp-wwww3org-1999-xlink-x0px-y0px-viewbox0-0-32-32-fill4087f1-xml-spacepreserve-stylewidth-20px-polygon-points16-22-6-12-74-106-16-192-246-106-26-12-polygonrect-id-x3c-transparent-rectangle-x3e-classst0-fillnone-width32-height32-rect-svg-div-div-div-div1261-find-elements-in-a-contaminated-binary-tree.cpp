class FindElements {
public:
    TreeNode *head;
    void help(TreeNode *p){
        if(p->left != NULL){
            p->left->val = 2*p->val+1;
            help(p->left);
        }
        if(p->right != NULL){
            p->right->val = 2*p->val + 2;
            help(p->right);
        }

    }
    
      
    
    FindElements(TreeNode* root) {
        root->val = 0;
        head = root;
        help(root);
    }
    
    
       
    bool findnode(TreeNode *root, int target){
        if(root==NULL) return false;
        if(root->val == target){
            return true;
        }
        // else
        // {
        if(findnode(root->left , target) || findnode(root->right , target)) return true;
            // bool ans=findnode(root->left , target);
            // if(ans==true) return true;
            // bool ans2=findnode(root->right , target);
            // if(ans2==true) return true;
        // }
        return false;
    }
    
    
    
    bool find(int target) {
       return findnode(head, target);
    }
};
