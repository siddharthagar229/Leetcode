class Solution {
public:
     bool fun(TreeNode *root,int k,set<int>&s)
    {
        if(root==NULL)
            return false;
        int p = root->val;
        if(s.find(k-p)!=s.end())
            return true;
        s.insert(p);
       return ( fun(root->left,k,s) || fun(root->right,k,s));
    }
    bool findTarget(TreeNode* root, int k) {
        set<int>s;
        s.insert(root->val);
       
        if(fun(root->left,k,s) || fun(root->right,k,s))
            return true;
        return false;
    }
};