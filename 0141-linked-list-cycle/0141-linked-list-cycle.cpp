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
    bool hasCycle(ListNode *head) {
         while(true){
            if(head == NULL){
                return false;
            }
            else if(head->val == INT_MAX){
                return true;
            }
            
            head->val = INT_MAX;
            head= head->next;
        
    }
    }
};