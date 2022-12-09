class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        
        int ans = 0;
        int len = longestPath(root,ans);
        return ans;
    }
    
    int longestPath(TreeNode* root, int& ans)
    {
        if(!root) return 0;
        
        int len1=0,len2=0;
        
        int L = longestPath(root->left,ans);
        int R = longestPath(root->right,ans);
        
        if(root->left && root->left->val==root->val) {
            len1 = L;
        }
        
        if(root->right && root->right->val==root->val) {
            len2 = R;
        }
        
        ans = max(ans,len1+len2);
        
        return 1 + max(len1,len2);
    }
};