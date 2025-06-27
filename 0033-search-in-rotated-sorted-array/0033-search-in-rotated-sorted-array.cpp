class Solution {
public:
    int search(vector<int>& a, int t) {
        int l=0,r=a.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==t){
                return m;
            }if(a[l]<=a[m]){
                if(a[l]<=t && a[m]>t){
                    r=m-1;
                }else l=m+1;
            }else{
                if(a[r]>=t && a[m]<t){
                    l=m+1;
                }else r=m-1;
            }
        }
        return -1;
    }
};