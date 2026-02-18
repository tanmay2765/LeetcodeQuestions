class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string t=to_string(x);
        string s=t;
        reverse(s.begin(),s.end());
        return s==t;
    }
};