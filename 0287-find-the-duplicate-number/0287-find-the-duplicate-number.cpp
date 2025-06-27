class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int i=0,n=a.size();
        while(i<n){
            int c=a[i]-1;
            if(a[i]!=a[c]){
                swap(a[i],a[c]);
            }else i++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) {
                return a[i];}
        }
        return 0;
    }
};