class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int i=0,n=a.size();
        while(i<n){
            if(a[i]<=n && a[i]>0 && a[i]!=a[a[i]-1]){
                swap(a[i],a[a[i]-1]);
            }else i++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) {
                return (i+1);}
        }
        return n+1;
    }
};