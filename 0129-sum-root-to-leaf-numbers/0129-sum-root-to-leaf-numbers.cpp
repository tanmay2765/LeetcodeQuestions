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
    void fun(TreeNode* root,int& sum,int c){
        if(!root) return;
        c=c*10+root->val;
        if(!root->left && !root->right) sum+=c;
        fun(root->left,sum,c);
        fun(root->right,sum,c);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        fun(root,sum,0);
        return sum;
    }
};