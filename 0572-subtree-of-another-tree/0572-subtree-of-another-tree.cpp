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
    TreeNode* findNode(TreeNode* root,int val){
        if(!root) return nullptr;
        if(root->val == val) return root;
        
        TreeNode* leftResult = findNode(root->left, val);
        if(leftResult) return leftResult;
        return findNode(root->right,val);
    

    }

    bool helper(TreeNode* subRoot,TreeNode* root){
        if(!subRoot && !root) return true;
        if(!subRoot || !root) return false;

        if(subRoot->val != root->val) return false;
        return helper(subRoot->left,root->left) && helper(subRoot->right,root->right);
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false; // If main tree is empty, subRoot cannot be a subtree
        if (!subRoot) return true; // An empty subtree is always a subtree

        TreeNode* start = findNode(root, subRoot->val);
        if (!start) return false; // If there's no matching node, return false

        // Check if the found node matches subRoot OR check if subRoot exists elsewhere in root
        return helper(subRoot, start) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};