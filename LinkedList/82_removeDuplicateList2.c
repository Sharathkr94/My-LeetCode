/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    //Create a new node (not POINTER) incase the head gets deleted
    struct ListNode *dummy = malloc (sizeof(struct ListNode ));
    struct ListNode *temp;
    dummy->val = 0;
    dummy->next = head;
    temp = dummy;
    
    //Check the first two nodes that have same value (sorted list)
    while (temp->next && temp->next->next)
    {
        if (temp->next->val == temp->next->next->val)
        {
            //Makes sense to declare this local because if there is no duplicate, this var will never be created
            int val = temp->next->val;
            //Normal dupplicate removal
            while (temp->next && temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
        }
        else
        {
            temp = temp->next;
        }
    }   
    return dummy->next;  
}
