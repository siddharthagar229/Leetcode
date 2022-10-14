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
    ListNode* deleteMiddle(ListNode* head) {
        
        
        
        if(head==NULL||head->next==NULL)
return NULL;
int count=0;
ListNode* temp=head;
while(temp){
temp=temp->next;
count++;
}
temp=head;
count=count/2-1;
while(count--){
temp=temp->next;
}
temp->next=temp->next->next;
return head;
        
        
        
    }
};