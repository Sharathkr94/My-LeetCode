/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int i,length;
    struct ListNode *last, *curr, *newHead;
    last = head;
    newHead = head;
    length = 1;
    
    if (last == NULL)
    {
        return NULL;
    }
        
    while (last->next != NULL)
    {
        length++;
        last = last->next;
    }
    
    k = k % length;
    last->next = head;
    {
        for (i = 0; i < (length - k); i++)
        {
            printf("i is %d\n", i);
            last = last->next;
        }
    }
    newHead = last->next;
    last->next = NULL;
    return newHead;
}
