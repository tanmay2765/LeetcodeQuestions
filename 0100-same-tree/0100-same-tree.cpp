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
void check(TreeNode* root,vector<int>& ar){
        if(!root){
            ar.push_back(-2);
            return;
        } 
        check(root->left,ar);
        check(root->right,ar);
        ar.push_back(root->val);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arr1,arr2;
        check(p,arr1);
        check(q,arr2);
        return arr1==arr2;
    }
};