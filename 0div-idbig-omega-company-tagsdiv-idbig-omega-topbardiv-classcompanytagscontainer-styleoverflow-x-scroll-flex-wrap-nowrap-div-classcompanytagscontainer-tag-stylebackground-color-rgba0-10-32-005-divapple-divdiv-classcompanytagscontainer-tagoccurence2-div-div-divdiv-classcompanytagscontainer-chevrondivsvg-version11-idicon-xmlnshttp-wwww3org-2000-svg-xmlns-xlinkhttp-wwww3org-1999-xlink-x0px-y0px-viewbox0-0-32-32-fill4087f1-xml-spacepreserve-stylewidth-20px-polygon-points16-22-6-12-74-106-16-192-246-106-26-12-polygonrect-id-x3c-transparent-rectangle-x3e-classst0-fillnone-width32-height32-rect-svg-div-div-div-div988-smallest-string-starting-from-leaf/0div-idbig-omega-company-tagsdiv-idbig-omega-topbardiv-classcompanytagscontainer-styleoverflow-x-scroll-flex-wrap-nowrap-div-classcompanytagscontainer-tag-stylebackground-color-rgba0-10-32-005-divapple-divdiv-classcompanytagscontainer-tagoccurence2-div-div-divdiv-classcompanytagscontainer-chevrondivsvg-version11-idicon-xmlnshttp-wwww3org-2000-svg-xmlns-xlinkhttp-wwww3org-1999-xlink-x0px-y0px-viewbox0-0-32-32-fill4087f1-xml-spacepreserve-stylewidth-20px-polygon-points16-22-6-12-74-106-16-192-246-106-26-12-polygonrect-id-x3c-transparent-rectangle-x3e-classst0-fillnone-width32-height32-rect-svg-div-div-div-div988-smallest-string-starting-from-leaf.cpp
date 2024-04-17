
class Solution {
public:
    
     set<string> res;
    void helper(TreeNode* root, string s = "") {
        if (root) {
            if (s.empty()){
                s += (char)(root->val+'a');
            } else {
                string st="";
                st=(char)(root->val+'a');
                st +=s;
                s=st;
                st="";
            }
            
            if (!root->left && !root->right) {
                res.insert(s);
                
                return;
            }
            
            helper(root->left, s);
            helper(root->right, s);
        }
    }
    
    
    string smallestFromLeaf(TreeNode* root) {
        
        helper(root);
        string ans="";
        
        for(auto it: res){
            ans=it;
            break;
        }
        
        return ans;
        
        
    }
};