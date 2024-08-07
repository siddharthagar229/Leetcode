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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
         if(head==NULL or head->next==NULL or head->next->next==NULL)return {-1,-1};
    int cnt=0,mini=INT_MAX,maxi=INT_MIN;
    vector<int>vect;
    ListNode* curr=head->next;
    ListNode* prev=head;
    ListNode* next=NULL;
    while(curr->next!=NULL){
        next=curr->next;
        if((curr->val<prev->val and curr->val<next->val) or (curr->val>prev->val and curr->val>next->val)){
            vect.push_back(cnt);;
        }
        cnt++;
        prev=curr;
        curr=curr->next;
    }
    if(vect.size()<=1){
        return {-1,-1};
    }
    for(int i=1;i<vect.size();i++){
        mini=min(mini,vect[i]-vect[i-1]);
    }
    maxi=vect[vect.size()-1]-vect[0];
    return {mini,maxi};
        
    }
};