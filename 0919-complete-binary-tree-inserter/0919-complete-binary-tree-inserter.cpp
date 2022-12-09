class CBTInserter {
public:
    queue<TreeNode*>q;
    TreeNode* rootNode;
    CBTInserter(TreeNode* root) {
        rootNode=root;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            if(node->left)
                q.push(node->left);
            if(node->right){
                q.push(node->right);
                q.pop();
                continue; // if both left and right present, go to next element in queue
            }
            break; 
			// if current node doesn't have 2 children => our insert will begin from this current element in the queue
        }
    }
    
    int insert(int val) {
        TreeNode* node = q.front();
        TreeNode* newNode= new TreeNode(val);
        q.push(newNode);
        if(!node->left){
            node->left = newNode;
        }else{
            node->right = newNode;
            q.pop();
        }
        return node->val;
    }
    
    TreeNode* get_root() {
        return rootNode;
    }
};