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
    vector<vector<int>> levelOrder(TreeNode* root) {

vector<vector<int>> result;
if(root == nullptr){
    return {};
}        

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int>currlevel;

            for(int i = 0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                currlevel.push_back(curr->val);

                if(curr->left!= nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }


            }
            result.push_back(currlevel);
        }
        return result;
    }
};