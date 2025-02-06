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

int balanced(TreeNode* root){
    if(root==NULL) return 0;
    
    int lefth = balanced(root->left);
    int righth = balanced(root->right);

    if(lefth == -1 || righth == -1) return -1;
    if(abs(lefth-righth)>1) return -1;

    return 1+max(lefth,righth);
}


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(balanced(root)==-1) return 0;
        else return 1;

    }
};