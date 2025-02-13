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
    int helper(TreeNode* root){
        if(root->left==nullptr && root->right == nullptr) return 1;

        int minHeightLeft = root->left==nullptr?INT_MAX:minDepth(root->left); 
        int minHeightRight = root->right==nullptr?INT_MAX:minDepth(root->right);

        return 1+min(minHeightLeft,minHeightRight);
    }
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int ans = helper(root);
        return ans;

    }
};