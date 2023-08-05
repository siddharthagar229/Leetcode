class Solution {
	vector<TreeNode*> f(int l,int r){
		if(l>r) { return {NULL};}

		vector<TreeNode*> ans;
		for(int i=l;i<=r;i++){            
			vector<TreeNode*> leftAns = f(l,i-1);
			vector<TreeNode*> rightAns = f(i+1,r);

			for(auto x:leftAns){
				for(auto y:rightAns){
					TreeNode*t = new TreeNode(i);
					t->left = x;
					t->right = y;
					ans.push_back(t);
				}   
			}
		}        
		return ans;
	}
public:
	vector<TreeNode*> generateTrees(int n) {
		return f(1,n);
	}
};