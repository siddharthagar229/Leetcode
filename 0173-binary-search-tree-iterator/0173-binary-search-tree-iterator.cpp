class BSTIterator {
public:
    TreeNode* curr;
    stack<TreeNode*> stk;
    void setUp(){
        while(curr!=NULL){
            stk.push(curr);
            curr=curr->left;
        }
    }
    BSTIterator(TreeNode* root) {
        curr=root;
        setUp();
    }
    
    int next() {
        curr=stk.top();
        stk.pop();
        int val=curr->val;
        curr=curr->right;
        setUp();
        return val;
    }
    
    bool hasNext() {
        if(stk.empty() && curr==NULL) return false;
        return true;
    }
};