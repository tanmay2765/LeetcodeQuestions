class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int l=1,r=x/2,res=0;
        while(l<=r){
            long long m=(l+r)/2;
            if(m*m<=x){
                res=m;
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return res;
    }
};