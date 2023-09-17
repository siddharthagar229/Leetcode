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