class Solution {
public:

bool isPalindrome(ListNode* head) {
  ListNode* head1=head;
 ListNode* current = head;
stack<int>st;
  while(current!=NULL){
      st.push(current->val);
      current=current->next;
  }
  while(head1!=NULL){
      if(st.top()!=head1->val) return false;
      head1=head1->next;
      st.pop();
  }
  return true;
}
};