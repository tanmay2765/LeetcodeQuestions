class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                sk.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(sk.empty()) return false;
                char top = sk.top();
                sk.pop();
                if((s[i] == ')' && top != '(') ||
                   (s[i] == ']' && top != '[') ||
                   (s[i] == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return sk.empty();
    }
};