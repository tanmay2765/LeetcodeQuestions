class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0, close = 0, maxLen = 0;
        
        // Left to right
        for(char ch : s) {
            if(ch == '(') open++;
            else close++;
            
            if(open == close) {
                maxLen = max(maxLen, 2 * close);
            } else if(close > open) {
                open = close = 0;
            }
        }
        
        open = close = 0;
        
        // Right to left
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '(') open++;
            else close++;
            
            if(open == close) {
                maxLen = max(maxLen, 2 * open);
            } else if(open > close) {
                open = close = 0;
            }
        }
        
        return maxLen;
    }
};