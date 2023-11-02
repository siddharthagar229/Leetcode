
class Solution {
public:
    int cnt=0;
    pair<int,int> slv(TreeNode*root)
    {
       
        if(!root)
            return {0,0};
        
        pair<int,int>l=slv(root->left);        
        pair<int,int>r=slv(root->right);        
        int n=l.second+r.second+1;
        int sum=l.first+r.first+root->val;
        if(root->val==sum/n)
          cnt++;
        return {sum,n};
    }
    
    int averageOfSubtree(TreeNode* root) {
       slv(root);
        return cnt;
    }
};