/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *firstPointer;
    struct ListNode *secondPointer;
    if (!head)
      return false;
    firstPointer  = head;
    secondPointer = head;
    while (firstPointer && secondPointer)
    {
        firstPointer = firstPointer->next;
        if(secondPointer->next)
        secondPointer = (secondPointer->next)->next;
        else
        return false;
        if (firstPointer == secondPointer)
          return true;
    }
    
    return false;
    
}
