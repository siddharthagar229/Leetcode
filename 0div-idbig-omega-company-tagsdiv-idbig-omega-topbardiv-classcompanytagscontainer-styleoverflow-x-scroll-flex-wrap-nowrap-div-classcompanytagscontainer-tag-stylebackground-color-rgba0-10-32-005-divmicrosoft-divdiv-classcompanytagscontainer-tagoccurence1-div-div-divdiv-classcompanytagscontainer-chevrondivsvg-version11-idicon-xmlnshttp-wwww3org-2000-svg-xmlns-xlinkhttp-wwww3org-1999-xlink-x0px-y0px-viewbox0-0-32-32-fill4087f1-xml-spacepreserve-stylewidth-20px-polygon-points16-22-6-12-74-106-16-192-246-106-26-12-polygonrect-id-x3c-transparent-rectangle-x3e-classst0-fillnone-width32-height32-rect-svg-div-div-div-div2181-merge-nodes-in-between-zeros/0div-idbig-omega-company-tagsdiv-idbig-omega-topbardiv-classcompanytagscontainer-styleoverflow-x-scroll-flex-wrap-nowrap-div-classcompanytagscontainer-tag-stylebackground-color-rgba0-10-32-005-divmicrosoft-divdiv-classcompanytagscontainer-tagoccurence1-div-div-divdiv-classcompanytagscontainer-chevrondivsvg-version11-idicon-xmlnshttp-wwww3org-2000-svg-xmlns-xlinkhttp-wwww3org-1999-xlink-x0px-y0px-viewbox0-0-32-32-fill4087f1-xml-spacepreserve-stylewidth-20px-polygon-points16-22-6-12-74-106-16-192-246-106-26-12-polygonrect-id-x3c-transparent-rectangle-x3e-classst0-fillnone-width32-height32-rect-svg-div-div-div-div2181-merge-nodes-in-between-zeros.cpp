class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=head;
        ListNode* curr=head->next;
        ListNode* tmp=ans;
        int sum=0;
        while(curr!=nullptr){
            if(curr->val==0){
                ans->val=sum;
                sum=0;
                if(curr->next==NULL) ans->next=NULL;
                else ans=ans->next;
            } else {
                sum += (curr->val);
            }
            curr=curr->next;
        }
        return (tmp->val==0?NULL:tmp);
    }
};