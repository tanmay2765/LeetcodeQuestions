class Solution {
public:
    bool pal(const string& s, int l, int h) {
        while(l<h){
            if(s[l]!=s[h]) return false;
                l++;
                h--;
            
        }
        return true;
    }

    void fun(const string& s, vector<vector<string>>& res, vector<string>& temp, int start) {
        if (start == s.size()) {
            res.push_back(temp);
            return;
        }

        for (int i = start; i < s.size(); i++) {
            if (pal(s, start, i)) {
                temp.push_back(s.substr(start, i - start + 1));
                fun(s, res, temp, i + 1);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        fun(s, res, temp, 0);
        return res;
    }
};
