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
        vector<int> tmp;
        vector<vector<int>> finalAns;
        if(root==nullptr) return finalAns;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr==nullptr){
                finalAns.push_back(tmp);
                tmp.clear();
                if (!q.empty()) {
                     q.push(nullptr);
                }
            }
            else{
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                tmp.push_back(curr->val);
            }
        }
        return finalAns;
    }
};