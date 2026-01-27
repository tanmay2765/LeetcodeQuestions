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
    void order(TreeNode* root,vector<int> &res){
        if(!root){
            res.push_back(INT_MIN);
            return;
        } 
        order(root->left,res);
        order(root->right,res);
        res.push_back(root->val);
    }
    bool check(vector<int> res1,vector<int> res2,TreeNode* p, TreeNode* q){
        order(p,res1);
        order(q,res2);
        return res1==res2;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> res1,res2;
        return check(res1,res2,p,q);
    }
};