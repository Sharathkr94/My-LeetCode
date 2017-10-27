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
        if (head == NULL)
        {
            return NULL;
        }
        
        if (head->next == NULL)
        {
            return head;
        }
        
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
