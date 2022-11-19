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
          if(!head)
        return NULL;

    if(!head->next)
        return head;

    ListNode *P = NULL;
    ListNode *C = head;
    ListNode *N = NULL;
    head = NULL;
    while(C !=NULL && C->next != NULL)
    {
       N = C->next;
       C->next = N->next;
       N->next = C;
        if(P)
        {
            P->next = N;
        }
        P = C;

        C=C->next;
        if(!head)
        {
            head = N;
        }
    }
    return head;
    }
};