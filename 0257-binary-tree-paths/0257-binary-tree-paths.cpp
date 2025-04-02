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

    void ansPrint(vector<int> path,vector<string> &ans){
        string tmp = "";
        // string tmp = to_string(path[0]) + "->" + to_string(path[path.size() - 1]);
        for(int i=0;i<path.size()-1;i++){
            tmp = tmp+(to_string(path[i])+"->");
        }
        tmp+=to_string(path[path.size()-1]);
        ans.push_back(tmp);
    }

    void traverse(TreeNode* root,vector<int> path,vector<string> &ans){
        if(root==nullptr) return;
        path.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            ansPrint(path,ans);
            return;
        }
        traverse(root->left,path,ans);
        traverse(root->right,path,ans);
        // path.pop_back();
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> path;
        traverse(root,path,ans);
        return ans;
    }
};