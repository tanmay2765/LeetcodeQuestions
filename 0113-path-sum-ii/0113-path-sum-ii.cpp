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
    vector<vector<int>> res;
    void fun(TreeNode* root, int t,int s,vector<int>temp){
        if(!root) return;
        s+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right && s==t) res.push_back(temp);
        fun(root->left,t,s,temp);
        fun(root->right,t,s,temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        fun(root,targetSum,0,temp);
        return res;
    }
};