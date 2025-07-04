class Solution {
public:
    void para(vector<string>& res, string curr, int open, int close, int n) {
        if (curr.length() == 2 * n) {
            res.push_back(curr);
            return;
        }

        if (open < n)
            para(res, curr + "(", open + 1, close, n);

        if (close < open)
            para(res, curr + ")", open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        para(res, "", 0, 0, n);
        return res;
    }
};
