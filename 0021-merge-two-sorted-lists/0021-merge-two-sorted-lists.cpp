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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
         ListNode *current = new ListNode(-1, nullptr);
        ListNode *dummy = current;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        while (l1) {
            current->next = l1;
            current = current->next;
            l1 = l1->next;
        }
        while (l2) {
            current->next = l2;
            current = current->next;
            l2 = l2->next;
        }
        current->next=nullptr;
        return dummy->next;
        
        
    }
};