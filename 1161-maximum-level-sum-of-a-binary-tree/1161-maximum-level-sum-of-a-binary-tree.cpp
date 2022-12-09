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
    int maxLevelSum(TreeNode* root) {
          int level  = 0;
    queue<TreeNode*> q;
    q.push(root);
    int ans =0;
    int maxsum = INT_MIN;
    while(!q.empty())
    {
        int size = q.size();
        level++;
        int tempsum =0;
        for(int i=0 ;i<size ;i++)
        {
            TreeNode* temp = q.front();
            q.pop();
            tempsum += temp->val;
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            
        }
        
        if(tempsum > maxsum)
        {
            ans = level;
            maxsum = tempsum ;
        }
    }
    return ans;
    }
};