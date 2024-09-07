class Solution {
public:
	//call this function when head and root value is found same
    bool solve(ListNode*head,TreeNode*root)
    {
	//list exhausted
        if(head==NULL)
            return true;
        if(root==NULL)
            return false;
        if(root->val!=head->val)
            return false;
			
        return solve(head->next,root->left) or solve(head->next,root->right);
        
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root==NULL)
            return false;
		
        if(root->val==head->val)
        {
			
            if(solve(head->next,root->left) or solve(head->next,root->right))
                return true;              
            
        }
		
		
        return isSubPath(head,root->left) or isSubPath(head,root->right);
        
    }
};