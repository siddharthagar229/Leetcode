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
    ListNode* swapPairs(ListNode* head) {
           if(head==NULL)return head;

        if(head->next==NULL)return head;

        

        ListNode*curr=head->next;

        ListNode*prev=head;

        swap(curr->val,prev->val);

        while(prev->next->next!=NULL&&curr->next->next!=NULL){

            prev=prev->next->next;

            curr=curr->next->next;

            swap(curr->val,prev->val);

        }

        return head;
    }
};