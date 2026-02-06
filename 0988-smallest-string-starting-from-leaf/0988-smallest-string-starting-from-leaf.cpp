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
    string s="";
    void fun(TreeNode* root,string c){
        if(!root) return;
        c=char('a'+root->val)+c;
        if(!root->left && !root->right && (c<s || s.empty())) s=c; 
        fun(root->left,c);
        fun(root->right,c);
    }
    string smallestFromLeaf(TreeNode* root) {
        fun(root,"");
        return s;
    }
};