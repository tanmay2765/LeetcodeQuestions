class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int i=0,n=a.size();
        while(i<n){
            int c=a[i]-1;
            if(a[i]!=a[c]){
                swap(a[i],a[c]);
            }else i++;
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(i+1!=a[i]){
                res.push_back(i+1);
            }
        }
        return res;
    }
};