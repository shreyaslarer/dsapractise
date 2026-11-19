## 01. Binary Tree Representation

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/binary-tree-representation/1)

### Problem Description

**Task:** Given an array nodes[] of size n, where each element represents the value of a node in the level-order traversal of a complete binary tree, construct the complete binary tree and return its root node.

#### Examples

##### Example 1

- **Input:**
```text
nodes[] = [1, 2, 3, 4, 5, 6, 7]
```
- **Explanation:** We start from the root and fill the tree level by level. First 1 becomes the root, then 2 and 3 become its children, and then 4, 5, 6, 7 fill the next level from left to right.Input: nodes[] = [10, 20, 30, 40, 50]Output:Explanation: We start from the root and fill the tree level by level. 10 is the root, 20 and 30 are its children, and 40 and 50 are placed as the left and right children of 20.

#### Constraints

- **1.** `1 ≤ n ≤ 10³^0 ≤ nodes[i] ≤ 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-19 19:50:48
- **Status:** Correct
- **Marks:** 0

```cpp
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
    
public:

Node* build(int i, const vector<int>& nodes){
if(i>=nodes.size()){
    return nullptr;
}
    
    Node* root = new Node(nodes[i]);
    root->left = build(2*i+1, nodes);
    root->right = build(2*i+2, nodes);
    return root;
}
    
  public:
    Node* buildTree(vector<int>& nodes) {
        return build(0,nodes);
        // code here
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-19 19:50:22
- **Status:** Correct
- **Marks:** 2

```cpp
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
    
public:

Node* build(int i, const vector<int>& nodes){
if(i>=nodes.size()){
    return nullptr;
}
    
    Node* root = new Node(nodes[i]);
    root->left = build(2*i+1, nodes);
    root->right = build(2*i+2, nodes);
    return root;
}
    
  public:
    Node* buildTree(vector<int>& nodes) {
        return build(0,nodes);
        // code here
        
    }
};
```

*Generated on: 11/19/2026, 7:51:01 PM*