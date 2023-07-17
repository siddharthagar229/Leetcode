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
    ListNode *reverseList(ListNode *l)
{
//Reversing the linked list
    ListNode *curr = l;
    ListNode *prev = NULL;
    while (curr)
    {
        ListNode *forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *rl1 = reverseList(l1);
    //reversing list 1
    ListNode *rl2 = reverseList(l2);
    //reversing list 2
    ListNode *ptr = new ListNode();
    //new node for storing significant sum digits
    ListNode *temp = ptr;
    int carry = 0;
    //carry in the process of taking sum
    while (rl1 || rl2 || carry)
    {
        int sum = 0;
        if (rl1)
        {
        //till we don't reach the end of reversed linked list 1
            sum += rl1->val;
            rl1 = rl1->next;
        }
        if (rl2)
        {
        //till we don't reach the end of reversed linked list 2
            sum += rl2->val;
            rl2 = rl2->next;
        }
        sum += carry;
        //Adding sum to carry
        carry = sum / 10;
        //Finding our new carry
        ListNode *nextNode = new ListNode(sum % 10);
        //Making new node with the sum digit
        temp->next = nextNode;
        //Connecting new node in the new linked list
        temp = temp->next;
    }
    ListNode *rev = reverseList(ptr->next);
    //reversing the new linked list
    return rev;
}
};