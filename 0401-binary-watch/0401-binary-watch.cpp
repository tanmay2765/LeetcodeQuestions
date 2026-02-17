class Solution {
public:
    int countbit(int n){
        int c=0;
        while(n>0){
            c+=n%2;
            n/=2;
        }return c;
    }
    vector<string> readBinaryWatch(int on) {
        if(on>8) return {};
        vector<string> res;
        for(int hr=0;hr<12;hr++){
            for(int min=0;min<60;min++){
                if(countbit(hr)+countbit(min)==on){
                    string t=to_string(hr)+":";
                    if(min<10) t+="0";
                    t+=to_string(min);
                    res.push_back(t);
                }
            }
        }return res;
    }
};