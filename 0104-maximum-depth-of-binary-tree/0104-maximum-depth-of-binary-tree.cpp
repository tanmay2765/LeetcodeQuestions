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
    void fun(TreeNode* root,int& c,int temp){
        if(!root) return;
        if(c<temp) c=temp;
        fun(root->left,c,temp+1);
        fun(root->right,c,temp+1);
    }
    int maxDepth(TreeNode* root) {
        int c=0;
        fun(root,c,1);
        return c;
    }
};