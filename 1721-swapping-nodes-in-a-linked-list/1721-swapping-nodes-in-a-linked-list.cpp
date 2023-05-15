class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
    return head;
ListNode *temp=head,*temp1=head;
int n=1,j=1;
while(temp!=NULL){     //calculating address for kth node from beginning
    if(n==k){
        temp1=temp;
    }
    temp=temp->next;
    n++;
}
temp=head;
while(j<n-k){  //calculating address for Kth node from end
    temp=temp->next;
    j++;
}
//swapping values
j=temp1->val;
temp1->val=temp->val;
temp->val=j;
return head;
    }
};