/**
 *@Author:Sharath
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr;
        ListNode *prev;
        ListNode *next;
        
        curr = head;
        prev = NULL;
        next = NULL;
        
        //empty list
        if (head == NULL)
        {
            return NULL;
        }
        
        //only one node in list
        if (head->next == NULL)
        {
            return head;
        }
        
        //default case
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        
    }
};
