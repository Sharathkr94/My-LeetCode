/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode *curr, *prev;
    int i,length = 0;
    curr = head;
    while (curr!= NULL)
    {
        curr = curr->next;
        length++;
    }
    if (n == length)
    {
        if (head->next == NULL)
        {
            return NULL;
        }
        head = head->next;
        return head;
    }
    
    
    //reset node to start
    curr = head;
    prev = NULL;
    
    for (i = 1; i < length - n + 1; i++)
    {
        printf("i is %d\n", i);
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    return head;
}
