class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,r=a.size()-1;
        while(l<r){
            int m=(l+r)/2;
            if(a[m]==a[l] && a[m]==a[r]){
                l++;
                r--;
            }else if(a[r]<a[m]){
                l=m+1;
            }else{
                r=m;
            }
        }
        return a[l];
    }
};