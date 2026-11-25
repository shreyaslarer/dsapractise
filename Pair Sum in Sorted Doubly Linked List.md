## 01. Pair Sum in Sorted Doubly Linked List

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1)

### Problem Description

**Task:** Given a sorted doubly linked list containing distinct positive integers and an integer target, find all pairs of nodes whose values add up to target.

#### Examples

##### Example 1

- **Input:**
```text
target = 7
```
- **Output:**
```text
[[1, 6], [2, 5]]
```
- **Explanation:** There are two pairs (1, 6) and (2,5) with sum 7.

##### Example 2

- **Output:**
```text
[[1, 5]]
```
- **Explanation:** There is one pairs (1, 5) with sum 6.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-25 21:41:15
- **Status:** Correct
- **Marks:** 2

```cpp
/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
  Node* findtail(Node* head){
  Node* tail = head;
  while(tail->next!=NULL){
      tail = tail->next;
  }
        return tail;

  }
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        vector<vector<int>>ans;
        Node* left = head;
        Node* right = findtail(head);
        if(head==NULL){
            return ans;
        }
        
        while(left!=NULL && right!=NULL && left->data < right->data){
            
            if(left->data + right->data == target){
                ans.push_back({left->data,right->data});
                left = left->next;
                right = right->prev;
            }else if(left->data+right->data < target){
                left = left->next;
            }else{
                right = right->prev;
            }
            
        }
        return ans;
        
        
        // code here
        
    }
};
```

*Generated on: 11/25/2026, 9:41:29 PM*