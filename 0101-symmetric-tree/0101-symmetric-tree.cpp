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

bool symmetryHelp(TreeNode* left,TreeNode* right){
    if(left==NULL || right ==NULL){
        return left==right;
    }
    if(left->val!=right->val) return false;

    return symmetryHelp(left->left,right->right) && symmetryHelp(right->left,left->right);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return (root==NULL) || symmetryHelp(root->left,root->right);
    }
};