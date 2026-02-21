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
    int fun(TreeNode* root,int mn,int mx){
        if(!root) return mx-mn;
        mn=min(mn,root->val);
        mx=max(mx,root->val);
        return max(fun(root->left,mn,mx),fun(root->right,mn,mx));
    }
    int maxAncestorDiff(TreeNode* root) {
        return fun(root,root->val,root->val);
    }
};