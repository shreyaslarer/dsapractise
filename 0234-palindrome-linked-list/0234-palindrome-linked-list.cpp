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
 ListNode* reversell(ListNode* head){
            if (head == NULL || head->next == NULL) return head;

            ListNode* newHead = reversell(head->next);
            ListNode* front = head->next;
                front -> next = head;
                head->next = NULL;
                return newHead;
        }
    bool isPalindrome(ListNode* head) {

        //First we will find out the middle node 
        //Then we will reverse the nidddle node nixt nodes
        //Then we will comprw thw first half with the second half 

        //Before doing al of these the second half need to be reversed right to check if it sis palindrome or not do for that lets roght the recursive function of the reverse ll that is 

       


        //Now lets begein with the real approach that is first lets find the middle ele by using the slow and fast approach 
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        //Lets call the reverse function that we have created here 
        ListNode* newHead = reversell(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second!=NULL){
            if(first->val!=second->val){
                reversell(newHead);
                return false;
            }

            //Or lese lets move 
            first = first->next;
            second = second->next;
        }

        //After doing all of these dont forget to reverse the ll 
        reversell(newHead);
        return true;
        
    }
};