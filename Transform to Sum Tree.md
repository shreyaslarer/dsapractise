## 01. Transform to Sum Tree

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/transform-to-sum-tree/1)

### Problem Description

**Task:** Given a root of a binary tree with n nodes, where each node may contain positive or negative values, convert it into a tree such that each node’s new value is equal to the sum of all values in its left and right subtrees (based on the original tree). For leaf nodes, update their values to 0.

#### Examples

##### Example 1

- **Input:**
```text
root = [10, -2, 6, 8, -4, 7, 5]Output:
```
- **Explanation:** Leaf nodes update: The leaf nodes 8, -4, 7, 5 are changed to 0 since they have no children. Update internal nodes: Left child: 8 + (-4) = 4 Right child: 7 + 5 = 12 Update root node: Root = sum of left and right subtree values = 4 - 2 + 12 + 6 = 20

##### Example 2

- **Input:**
```text
root = [1, 2, 3, 4, 5, -6, 2]Output:Explanation:Leaf nodes update: The leaf nodes 4, 5, -6, 2 are changed to 0 since they have no children. Update internal nodes: Left child: 4 + 5 = 9 Right child: -6 + 2 = -4 Update root node: Root = sum of left and right subtree values = 9 + 2 + 3 + (-4) = 10
```

#### Constraints

- **1.** `1 ≤ n ≤ 10⁴`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(height)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-23 10:37:21
- **Status:** Correct
- **Marks:** 2

```cpp
/* Structure for Tree Node
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
  
  int solve(Node *root){
      if(root==nullptr){
          return 0;
      }
      int oldval = root->data;
      int leftsum = solve(root->left);
      int rightsum = solve(root->right);
      root->data=leftsum+rightsum;
      return root->data+oldval;
  }
  
  
  
    void toSumTree(Node *root) {
        solve(root);
        // code here
        
    }
};
```

*Generated on: 11/23/2026, 10:37:47 AM*