class Solution {
public:
    void reorderList(ListNode* head) {
      deque<ListNode*> q;
        
      ListNode* curr=head;
      ListNode* ans=head;
        
      //record the linked list node order to the deque  
      while(curr){
        q.push_back(curr);
        curr=curr->next;
      }
      //pop the first one because the other pointer has already pointed to the head
      q.pop_front();
        
      while(!q.empty()){
        //get the current tail element of the deque and then pop it  
        ans->next=q.back();
        ans=ans->next;
        q.pop_back();
        //get the current top element of the deque and then pop it
        if(!q.empty()){
          ans->next=q.front();
          ans=ans->next;
          q.pop_front();
        }
      }
      ans->next=NULL;
  }
};