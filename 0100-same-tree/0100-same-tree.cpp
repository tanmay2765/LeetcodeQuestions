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
    void check(TreeNode* p, TreeNode* q, vector<int>& arr1, vector<int>& arr2) {
        // Record current node values (or -1 for null to preserve structure)
        if (p) arr1.push_back(p->val);
        else arr1.push_back(-2);

        if (q) arr2.push_back(q->val);
        else arr2.push_back(-2);

        // Recurse only if either node exists
        if (p || q) {
            check(p ? p->left : nullptr, q ? q->left : nullptr, arr1, arr2);
            check(p ? p->right : nullptr, q ? q->right : nullptr, arr1, arr2);
        }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arr1, arr2;
        check(p, q, arr1, arr2);
        return arr1 == arr2;
    }
};
