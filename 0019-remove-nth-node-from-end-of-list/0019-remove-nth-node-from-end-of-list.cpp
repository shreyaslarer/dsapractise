/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //Inetialize the slow and fast

        ListNode* slow = head;
        ListNode* fast = head;

        //Traverse only the fast node first by given n times 
        for (int i =0; i<n; i++){
            fast = fast->next;
        }

        //If fast reaches the NULL first only then return the head
        if (fast == NULL) return head->next;

        //Traerse the slow and fast pointers by simultaneously
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }

        //We are pointing to the node that we actually need to deleted before deleting it store it we should need not to loss the next ele
        ListNode * delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
        
    }
};