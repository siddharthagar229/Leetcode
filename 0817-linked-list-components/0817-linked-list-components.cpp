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
    int numComponents(ListNode* head, vector<int>& n) {

        
        
        
        
        int cnt=0;
				int set=0;
				while(head!=NULL)
				{
					if(find(n.begin(),n.end(),head->val)!=n.end() && set==0){
						set=1;
                        cnt++;
                    }
					 if(find(n.begin(),n.end(),head->val)==n.end())
					{
						// cnt++;
						set=0;
					}

					// else
					// 	set=0;
					head=head->next;
				}
				return cnt;
        
        
        
    }
};


