/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
          vector<ListNode*> vec; 
        ListNode* temp = head;;
        while(temp){
            vec.push_back(temp);
            temp = temp->next;
        }
        reverse(vec.begin(),vec.end());
        
        
        stack<ListNode*> st;  ///**** creating an increasing stack with max at top
        for(ListNode* l:vec){
            
            if(st.size()==0){
                st.push(l);
                continue;
            }
            if(l->val>=st.top()->val){
                st.push(l);
            }
        }
        
                 //****   creating list to return
        if(st.size()==0)return NULL;
                                 
        ListNode*root = st.top();
        ListNode* tail = st.top();
        st.pop();
        while(st.size()){
            ListNode* l = st.top();
            st.pop();
            tail -> next = l;
            tail = tail->next;   
        }
        tail->next = NULL;  //** end the list 
        
        
        return root;
    }
};