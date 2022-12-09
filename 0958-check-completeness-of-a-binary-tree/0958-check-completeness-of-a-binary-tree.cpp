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
    bool isCompleteTree(TreeNode* root) {
        
          queue<TreeNode*> q;
        q.push(root);
        bool end = false;
        while(!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();
            if(cur == NULL)     // We encounter a NULL and this should be our end node. Like ex-1.
                end = true;  
            else  // cur != NULL
            {
                if(end == true)  // means after encountering a NULL we again encountered a node like ex-2.
                    return false;
                // if(cur->left!=NULL){
                q.push(cur->left);
                
                // if(cur->right!=NULL){
                q.push(cur->right);
                // }
            }
        }
        return true; 
        
    }
};