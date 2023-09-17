class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        stack<TreeNode*> st;
        TreeNode* temp = root;

        while(temp || !st.empty()){
            while(temp){
                st.push(temp);
                temp = temp->left;
            }
            temp = st.top();
            st.pop();
            in.push_back(temp->val);
            temp = temp->right;
        }

        return buildTree(in, 0, in.size() - 1);
    }

    TreeNode* buildTree(vector<int> &in, int start, int end){
        if(start > end){
            return nullptr;
        }

        int mid = (start + end) / 2;
        TreeNode* newNode = new TreeNode(in[mid]);
        newNode->left = buildTree(in, start, mid - 1);
        newNode->right = buildTree(in, mid + 1, end);

        return newNode;
    }
};