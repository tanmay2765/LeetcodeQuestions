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
    void fun(TreeNode* root){
        if(!root) return;
        TreeNode* left=root->left;
        root->left=root->right;
        root->right=left;
        fun(root->left);
        fun(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        fun(root);
        return root;
    }
};