
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
         ListNode * dummy = new ListNode(0);
           dummy->next = head;
           ListNode* curr = dummy , *nex = dummy , *pre = dummy;
           int cnt = 0;
           while(curr->next) {
               curr = curr->next;
               cnt++;
           } 
           while(cnt >= k) {
               curr = pre->next;
               nex = curr->next;
               for(int i=1;i<k;i++) {
                   curr->next = nex->next;
                   nex->next = pre->next;
                   pre->next = nex;
                   nex = curr->next;
               }
               pre = curr;
               cnt-=k;
           }
        return dummy->next;
        
        
    }
};