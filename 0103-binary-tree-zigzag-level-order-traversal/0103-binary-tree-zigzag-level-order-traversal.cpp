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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        if (!root) return arr;
        queue<TreeNode*> q;
        int c = 0;
        q.push(root);
        while (!q.empty()) {
            int l = q.size();
            vector<int> cl;
            for (int i = 0; i < l; i++) {
                TreeNode* node = q.front(); q.pop();
                cl.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (c % 2 == 0)
                arr.push_back(cl);
            else {
                reverse(cl.begin(), cl.end());
                arr.push_back(cl);
            }
            c++;  
        }
        return arr;
    }
};
