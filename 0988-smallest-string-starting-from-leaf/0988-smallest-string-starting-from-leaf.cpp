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
    void fun(TreeNode* root,string& s,string c){
        if(!root) return;
        c=char('a'+root->val)+c;
        if(!root->left && !root->right) if(c<s || s.empty()) s=c;
        fun(root->left,s,c);
        fun(root->right,s,c);
    }
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        fun(root,s,"");
        return s;
    }
};