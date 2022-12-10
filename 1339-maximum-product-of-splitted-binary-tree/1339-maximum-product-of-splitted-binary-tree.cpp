class Solution {
int m = 1000000000+7;
    long long int total_sum(TreeNode* root)
    {
        if(!root)return 0;
        return root->val + total_sum(root->left) + total_sum(root->right);
    }
    
    long long int call(TreeNode* root, long long int& ans, long long int sum)
    {
        if(!root)return 0;
        long long int tot = root->val + call(root->left,ans,sum) + call(root->right,ans,sum);
        ans = max(ans,(sum-tot)*tot);
        return tot;
    }
public:
    int maxProduct(TreeNode* root) {
        long long int sum = total_sum(root);
        long long int ans = INT_MIN;
        call(root,ans,sum);
        return ans%m;
    }

};