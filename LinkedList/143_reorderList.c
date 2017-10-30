/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
//     struct ListNode *curr, *last;
//     int i;
//     curr = head;
//     last = head;
    
//     while (curr != NULL)
//     {
//         last = last->next;
//         if (last->next == NULL)
//         {
//             last->next = curr->next;
//         }
//         curr = curr->next;
//     }
//     return head;
    
    /*I DONT KNOW WHY ABOVE SOLUTION DIDNT WORK*/
    
    if (head == NULL)
    {
        return NULL;
    }
        if (head->next==NULL)
        {
            return head;
        }
    
        struct ListNode *slow = head;
        struct ListNode *fast = head;
        struct ListNode *newHead;
        
        //Find the midpoint of the list. Slow points to that
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //Reversing the second half of the list
        newHead = slow->next;
        while (newHead->next){
            struct ListNode* temp = slow->next;
            slow->next = newHead->next;
            newHead->next = newHead->next->next;
            slow->next->next = temp;
        }
        
        //Reordering the list, merge from both halves
        fast = head;
        while (slow != fast  && slow->next){
            struct ListNode* temp = fast->next;
            fast->next = slow->next;
            slow->next = slow->next->next;
            fast->next->next = temp;
            fast = fast->next->next;
        }
        return head;
}
