/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *node, *temp;
    node = head;
    //Empty list
    if (node == NULL)
    return;
    
    //Default case
    while (node->next != NULL)
    {
        if (node->val == (node->next)->val)
        {
            temp = node->next->next;
            free(node->next);
            node->next = temp;
        }
        else
        {
           node = node->next;
        }
    }
    
    return head;
    
}
