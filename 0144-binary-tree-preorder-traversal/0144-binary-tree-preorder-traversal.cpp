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
void preorder(TreeNode* root,vector<int>& ans){
    if(root==NULL) return;
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
void preorder_iter(TreeNode* root,vector<int>& ans){
    stack<TreeNode*> st;
    if(root==NULL) return;
    st.push(root);
    while(!st.empty()){
        TreeNode* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
        
    }
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
     vector<int> ans;
     preorder_iter(root,ans);   
        return ans;
    }
};