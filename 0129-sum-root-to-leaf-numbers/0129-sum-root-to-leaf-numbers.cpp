class Solution {
private:
    void solve(TreeNode* root , int &ans, vector<int> path){
        //base case 
        if(root == NULL)
            return;
			
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            int num = 0;
            for(int i = 0 ; i < path.size() ; i++){
                num = num*10 + path[i];
            }
            ans += num;
        } 
        solve(root->left , ans, path);
        solve(root->right , ans, path);
        
        path.pop_back();
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int ans = 0; vector<int> path;
        solve(root, ans,path);
        return ans;
    }
};