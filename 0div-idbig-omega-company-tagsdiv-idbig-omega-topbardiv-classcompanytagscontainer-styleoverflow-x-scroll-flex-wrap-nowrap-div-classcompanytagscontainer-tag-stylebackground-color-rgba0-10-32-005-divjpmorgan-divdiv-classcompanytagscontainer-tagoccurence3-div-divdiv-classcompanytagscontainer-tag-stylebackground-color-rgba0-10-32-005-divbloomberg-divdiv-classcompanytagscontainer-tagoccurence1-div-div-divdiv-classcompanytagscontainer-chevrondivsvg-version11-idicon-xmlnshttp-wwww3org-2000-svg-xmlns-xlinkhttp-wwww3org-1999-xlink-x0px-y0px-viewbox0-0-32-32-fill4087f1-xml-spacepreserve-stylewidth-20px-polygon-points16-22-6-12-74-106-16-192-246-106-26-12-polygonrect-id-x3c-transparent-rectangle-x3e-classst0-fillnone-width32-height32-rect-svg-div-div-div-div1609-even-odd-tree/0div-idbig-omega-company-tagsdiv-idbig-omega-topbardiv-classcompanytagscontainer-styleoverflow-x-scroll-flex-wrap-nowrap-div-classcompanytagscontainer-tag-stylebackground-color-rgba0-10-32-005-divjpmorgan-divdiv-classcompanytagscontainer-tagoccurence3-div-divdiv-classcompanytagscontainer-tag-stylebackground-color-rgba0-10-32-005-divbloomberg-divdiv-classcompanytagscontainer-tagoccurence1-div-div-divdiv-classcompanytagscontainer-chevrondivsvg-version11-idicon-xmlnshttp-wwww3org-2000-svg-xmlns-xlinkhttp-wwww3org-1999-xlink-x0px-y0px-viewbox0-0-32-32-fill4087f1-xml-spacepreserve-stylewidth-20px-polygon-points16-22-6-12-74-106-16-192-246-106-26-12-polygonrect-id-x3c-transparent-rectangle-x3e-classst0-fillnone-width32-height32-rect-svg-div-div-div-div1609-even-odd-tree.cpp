class Solution {
    private: 
    bool solve(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        
        while(!q.empty())
        {
            int n=q.size();
            
            if(level%2==0)
            {
                // Even level
                int prev=-1;
                
                for(int i=0;i<n;i++)
                {
                    TreeNode* node=q.front();
                    q.pop();
                    int element=node->val;
                    
                    // false case
                    if(element%2==0 || prev>= element)
                    {
                        return false;
                    }
                    
                    prev=element;
                    
                    if(node->left)
                    {
                        q.push(node->left);
                    }
                    if(node->right)
                    {
                        q.push(node->right);
                    }
                }
            }
            else
            {
                // odd level
                int prev=1e9;
                
                for(int i=0;i<n;i++)
                {
                    TreeNode* node=q.front();
                    q.pop();
                    int element=node->val;
                    
                    if(element%2!=0 || prev<=element)
                    {
                        return false;
                    }
                    
                    prev=element;
                    
                    if(node->left)
                    {
                        q.push(node->left);
                    }
                    
                    if(node->right)
                    {
                        q.push(node->right);
                    }
                }
            }
            
            level++;
        }
        
        return true;
    }
    
public:
    bool isEvenOddTree(TreeNode* root) {
        
        return solve(root);
        
    }
};