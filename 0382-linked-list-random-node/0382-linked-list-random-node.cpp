class Solution {
public:
    int n;
    //store the nodes in a array
    vector<ListNode*>v;
    Solution(ListNode* head) {
        ListNode*p=head;
        while(p)
        {
            v.push_back(p);
            p=p->next;
        }
        //n is the no. of nodes (size of vector)
        n=v.size();
    }
    
    int getRandom() {
        //rand will give index from 0 to n-1
        int index=rand()%n;
        return v[index]->val;
    }
};
