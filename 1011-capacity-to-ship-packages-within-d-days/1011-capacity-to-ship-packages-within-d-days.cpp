class Solution {
public:
    bool sum(vector<int>& w, int d,int m){
        int i=0,c=0,d2=1;;
        while(i<w.size()){
            if(c+w[i]>m){
                d2++;
                c=0;
            }else{
                c+=w[i];
                i++;
            }
        }
        return d2<=d;
    }
    int shipWithinDays(vector<int>& w, int d) {
        int l=0,r=0;
        for(int i=0;i<w.size();i++){
                r+=w[i];
                l=max(l,w[i]);
        }
        while(l<r){
            int m=(l+r)/2;
            bool a=sum(w,d,m);
            if(a){
                r=m;
            }else l=m+1;
        }
        return l;
    }
};