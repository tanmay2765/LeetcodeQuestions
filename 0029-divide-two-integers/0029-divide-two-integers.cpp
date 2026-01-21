class Solution {
public:
    long long divide(long long d1,long long d2) {
        if(d1==INT_MIN && d2==-1) return INT_MAX;
        long long res=abs(d1)/abs(d2);
        if(d1<0 && d2>0 || d1>0 && d2<0) return -res;
        else return res;
    }
};