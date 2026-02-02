class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0,close=0,mx=0;
        for(char c:s){
            if(c=='(') open++;
            else close++;
            if(open ==close) mx=max(mx,2*close);
            else if(close>open) open=close=0;
        }open=close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open==close) mx=max(mx,2*close);
            else if(open>close) open=close=0;
        }return mx;
    }
};