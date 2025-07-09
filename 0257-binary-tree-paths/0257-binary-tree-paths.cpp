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
    void fun(TreeNode* root,vector<string>& arr,string s){
        if(!root) return;
        s+=to_string(root->val);
        if(!root->left && !root->right)  arr.push_back(s);
        fun(root->left,arr,s+"->");
        fun(root->right,arr,s+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        fun(root,arr,"");
        return arr;
    }
};