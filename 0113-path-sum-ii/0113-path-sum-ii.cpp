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
    void fun(TreeNode* root,int t,int s,vector<int>temp,vector<vector<int>>& arr){
        if(!root) return;
        s+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right){
            if(s==t){
                arr.push_back(temp);
            }
        }    
        fun(root->left,t,s,temp,arr);
        fun(root->right,t,s,temp,arr);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> arr;
        fun(root,targetSum,0,{},arr);
        return arr;
    }
};