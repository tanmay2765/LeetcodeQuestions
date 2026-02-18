class Solution {
public:
    string convert(string s, int num) {
        if(num==1) return s;
        vector<string> row(num);
        int curr=0;
        bool godown=false;
        for(char c:s){
            row[curr]+=c;
            if(curr==0||curr==num-1) godown=!godown;
            curr+=godown?1:-1;
        }string res="";
        for(string c:row) res+=c;
        return res;
    }
};