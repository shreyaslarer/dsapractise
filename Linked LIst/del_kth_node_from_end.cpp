#include <bits/stdc++.h>
using namespace std;

struct Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
  };

  //Brute froce approach
  Node* removenthNode(Node* head, int n){

    //Lets first find the lentgh forst and we can doo len - 1
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    if(head==NULL || head->next==NULL){
        return NULL;
    }

    temp = head;

    while(temp!= NULL){
        len--;
        break;
    }
    if(len==0){
        Node* delNode = temp -> next;
        temp->next = temp->next->next;
        delete delNode;
        return head;
    }

  }


//Optimal approach using the slow and fast pointer approach

  class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {

        Node* slow = head;
        Node* fast = head;
        //lets move the fast pointer n steps ahead
        for (int i=0;i<n;i++){
            fast = fast->next;
        }
        //What if the fast reaches the NULL first only then we need to return the hed because the tail means head in ll 
        if (fast == NULL){
            return head->next;
        }

        //Now move the fast and slow simultaneously
        while(fast->next!= NULL){
            fast = fast->next;
            slow = slow->next;
        }

        //Now the slow is at the node before the node to be deleted
        //Store the node to be deleted
        Node* delNode = slow->next;
        slow->next=slow->next->next;
        free(delNode);
        return head;


        
    }
};