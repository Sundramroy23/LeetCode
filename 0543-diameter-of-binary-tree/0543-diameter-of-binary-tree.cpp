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

int diameter(int &maxi,TreeNode* root){
    if(root == NULL) return 0;

    int lefth = diameter(maxi,root->left);
    int righth = diameter(maxi,root->right);
    
    maxi = max(maxi,lefth+righth);
    return 1+max(lefth,righth);
}


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        diameter(maxi,root);
        return maxi;
    }
};