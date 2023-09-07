class Solution {
public:
    ListNode* reverse(ListNode* node_1,ListNode* node_2){
         
        ListNode* curr = node_1;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        
        while(curr != node_2){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        
        return prev;
    }
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* node_1 = dummy;
        for(int i=0;i<left-1;i++){
            node_1 = node_1->next;
        }
        ListNode* node_2 = dummy;
        for(int i=0;i<right;i++){
            node_2 = node_2->next;
        }
        
        ListNode* temp1 = node_1->next;
        ListNode* temp2 = node_2->next;
     
        node_1->next = reverse(node_1->next,node_2->next);
        temp1->next = temp2;
        
        return dummy->next;
    }
};