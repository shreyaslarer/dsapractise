/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>>q;
        q.push({root,0});
        int maxwidth = 0;

        while(q.size()>0){
            int currlevel = q.size();
            int stidx = q.front().second;
            int endidx = q.back().second;
            maxwidth = max(maxwidth,endidx-stidx+1);

            for(int i = 0; i<currlevel; i++){
                auto curr = q.front();
                q.pop();
long long normIdx = curr.second - stidx;
if (curr.first->left) {
    q.push({curr.first->left, normIdx * 2 + 1});
}
if (curr.first->right) {
    q.push({curr.first->right, normIdx * 2 + 2});
}
            }

        }
        return maxwidth;
        
    }
};