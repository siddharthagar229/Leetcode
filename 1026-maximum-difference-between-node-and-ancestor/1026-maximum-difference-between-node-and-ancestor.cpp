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
    int max_diff = INT_MIN;
    
    void f(TreeNode *root, int mini, int maxi){
        
		//return if null
        if(!root) return;
        
		//if the node is the leaf node
		//update mini and maxi values and then update our max_diff
        if(!root->left and !root->right){
        
            mini = min(mini, root->val);
            maxi = max(maxi, root->val);
			
            max_diff = max(max_diff, abs(mini-maxi));
            return;
        }
        
		//at every step keep on calculating the mini and maxi 
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);

        f(root->left, mini, maxi);
        f(root->right, mini, maxi);
        
        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int mini = INT_MAX, maxi=INT_MIN;
        f(root, mini, maxi);
        return max_diff;
    }
};