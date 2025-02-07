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
    bool helper(TreeNode* root,int targetSum,int sumTotal){
        if(root==nullptr) return false;
        if(root->left==nullptr && root->right==nullptr && sumTotal+root->val == targetSum){
            return true;
        }

        return (helper(root->left,targetSum,sumTotal+root->val) || helper(root->right,targetSum,sumTotal+root->val));
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum,0);
    }
};