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
    int sum =0;
    void traverse(TreeNode* root,int l,int h){
       
        if(root==NULL){
            return ;
        }
        
        if(root->val>=l && root->val<=h){
            sum+=root->val;
        }
            traverse(root->left,l,h);
            traverse(root->right,l,h);
        
        
        
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        
        traverse(root,low,high);
        return sum;
    }
};