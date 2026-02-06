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
    int sum=0;
    void fun(TreeNode* root){
        if(!root) return;
        if(root->left && !root->left->left && !root->left->right) sum+=root->left->val;
        fun(root->left);
        fun(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        fun(root);
        return sum;
    }
};