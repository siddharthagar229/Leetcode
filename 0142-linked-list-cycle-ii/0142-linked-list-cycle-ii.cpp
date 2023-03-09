/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         if (!head) return nullptr;
        map<ListNode*, bool> t;
        auto f = t.find(head);
        t[head] = true;
        head = head->next;
        
        while(head != nullptr) {
            f = t.find(head);
            if (f != t.end()) {
                return head;
            }
            t[head] = true;
            head = head->next;
        }
        return head;
        
    }
};