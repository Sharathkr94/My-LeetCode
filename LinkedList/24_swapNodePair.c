/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *swap = head;
    
    if (swap == NULL || swap->next == NULL)
      return swap;
      
    while (swap != NULL && swap->next != NULL)
    {
        Swap(&swap->val, &swap->next->val);
        swap = swap->next->next;
    }
    return head;
}

void Swap(int *a, int *b)
{
    int *temp;
    temp = *b;
    *b = *a;
    *a = temp;   
}
