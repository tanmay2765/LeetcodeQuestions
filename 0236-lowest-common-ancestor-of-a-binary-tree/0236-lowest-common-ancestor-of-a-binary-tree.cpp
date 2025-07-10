/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* fun(TreeNode* root,TreeNode* m,TreeNode* n){
        if(!root) return nullptr;
        if(root==n || root==m) return root;
        TreeNode* left=fun(root->left,m,n);
        TreeNode* right=fun(root->right,m,n);
        if(left && right) return root;
        return left ? left:right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return fun(root,p,q);
    }
};