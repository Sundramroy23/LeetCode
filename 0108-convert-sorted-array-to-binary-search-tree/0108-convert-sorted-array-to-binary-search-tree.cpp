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
    TreeNode* helper(vector<int> arr,int left,int right){
        if(left>right) return nullptr;
        int mid = (left+right)/2;
        TreeNode* root =new TreeNode(arr[mid]);
        root->left = helper(arr,left,mid-1);
        root->right = helper(arr,mid+1,right);
        return root;

    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = helper(nums,0,nums.size()-1);
        return root;
    }
};