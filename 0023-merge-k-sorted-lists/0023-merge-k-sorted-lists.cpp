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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        
       priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,greater<pair<int, ListNode*>>> pq;
        for(const auto &i : lists)
        {
            if(i)
            {
                pq.push({i->val, i});
            }
        }
        ListNode *dummyNode = new ListNode(0, nullptr), *head = dummyNode;
        while(!pq.empty())
        {
            dummyNode->next = pq.top().second;
            if(pq.top().second->next)
            {
                pq.push({pq.top().second->next->val, pq.top().second->next});
            }
            dummyNode = dummyNode->next;
            pq.pop();
        }
        dummyNode->next = nullptr;
        return head->next;
        
        
    }
};