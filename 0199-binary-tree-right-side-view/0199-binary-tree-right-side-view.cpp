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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> arr;
        if(!root) return arr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int>cl;
            for(int i=0;i<l;i++){
                TreeNode* node=q.front();q.pop();
                cl.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            arr.push_back(cl[cl.size()-1]);
        }
        return arr;
    }
};