/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *node_odd, *node_even = NULL, *node_even_head = NULL;
    
    //no node
    if(head == NULL)
      return head;
    
    node_odd = head;
    node_even_head = head->next;
    node_even = node_even_head;
    
    //only one node
    if (head->next == NULL)
    {
      return head;
    }
    
    //general case
    while (node_odd->next != NULL && node_even->next != NULL)
    {
        node_odd->next = node_even->next;
        node_odd = node_odd->next;
        node_even->next = node_odd->next;
        node_even = node_even->next;
    }
    
    //Last odd node must point to first even node, hence we need a head of even
    node_odd->next = node_even_head;
    
    return head;
}
