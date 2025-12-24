class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        vector<int> pr(n,true);
        pr[0]=pr[1]=false;
        for(int i=2;i*i<n;i++){
            if(pr[i]){
                for(int j=i*i;j<n;j+=i) pr[j]=false;
            }
        }
        int c=0;
        for(bool p:pr){
            if(p) c++;
        }
        return c;
    }
};