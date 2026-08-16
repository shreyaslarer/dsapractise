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
    bool hasCycle(ListNode *head) {

        //Here simple lsts use the slow and fast pointer approach bbcz while the slow and fast pointers are traversing the loop at some certain point the both slow and fast will point the same node

        ListNode* slow = head;
        ListNode* fast = head;
        //waht if the LL does not have the loop only then we need to stop right so we can simply stop the fast when it reaches the last node as well as the nullptr
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            //If both the fast and slow pointer touch the node then
            if(slow == fast) return true;

        }
        return false;
        
    }
};