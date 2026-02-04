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
    bool isValidBST(TreeNode* root) {
        return fun(root,LONG_MIN,LONG_MAX);
    }
    bool fun(TreeNode* root,long min,long max){
        if(!root) return true;
        if(min>=root->val || max<=root->val) return false;
        return fun(root->left,min,root->val) && fun(root->right,root->val,max);
    }
};