class Solution {
public:
    int ans=0;
    void chk(TreeNode* root, int dir, int cnt){
        if(!root){return;}
        ans=max(ans, cnt);
        if(dir){
            chk(root->left, 0, cnt+1);
            chk(root->right, 1, 1);
        }
        else{
            chk(root->right, 1, cnt+1);
            chk(root->left, 0, 1);
        }
    }
    int longestZigZag(TreeNode* root) {
        
        
        if(!root){return 0;}
        chk(root, 1, 0);
        chk(root, 0, 0);
        return ans;
        
        
    }
};