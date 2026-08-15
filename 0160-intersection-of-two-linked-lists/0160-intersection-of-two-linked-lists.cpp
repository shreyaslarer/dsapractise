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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        // Loop until they meet. If there is no intersection, they will 
        // both eventually hit NULL at the same time and break the loop.
        while (temp1 != temp2) {
            
            // If ptrA hits NULL, swap to head of B. Otherwise, just go to next.
            if (temp1 == NULL) {
                temp1 = headB;
            } else {
                temp1 = temp1->next;
            }
            
            // If ptrB hits NULL, swap to head of A. Otherwise, just go to next.
            if (temp2 == NULL) {
                temp2 = headA;
            } else {
                temp2 = temp2->next;
            }
        }
        
        // Since the loop breaks when ptrA == ptrB, we can just return either one.
        // It will be the intersection node, or NULL if they never intersect.
        return temp1;
    }
};