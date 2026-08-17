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

  ListNode* newkfun(ListNode* temp, int k){
            int cnt = 1;
            while(temp != NULL && cnt < k){
                cnt++;
                temp = temp->next;

            }
            return temp;
        }

    ListNode* rotateRight(ListNode* head, int k) {

      


        //The first edge case is simmpkw what if the given head and the given k is null then 
        if(head == NULL || k == 0) return head;

        //To rotate it by k places we need to know the total length and the  tail lets find it 
        ListNode* tail = head;
        int len = 1;
        while(tail->next!= NULL){
            tail=tail->next;
            len++;

        }

        //From the above code we got the total len of the ll and the tail is at the last node of the ll
        //Next lets find the point from where we need to place the k
        //And also what if k is very large
        //Keep one thing in mind if the given k == length then if the ll gets rotated also the head will point to the same element and hed will be at the same place right 
        //Lets first do that part that is 

        if (k%len==0) return head;
        //The above code will check and it will simple wont perform the action if the given len == k;

        //Then of the  k!=len then lets do the work that is 
        k = k%len;
        //Point the tail to the head
        tail->next = head;
        //Create a function to move the k by its given places 

        ListNode* kfun = newkfun(head, len-k);
        head = kfun->next;
        kfun->next = NULL;
        return head;

        
    }
};