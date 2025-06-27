class Solution {
public:
    int missingNumber(vector<int>& n) {
        int i=0;
        while(i<n.size()){
            if(n[i]<n.size() && n[i]!=n[n[i]]){
                swap(n[i], n[n[i]]);
            }
            else i++;
        }
        for(int i=0;i<n.size();i++){
            if(i!=n[i]) {
                return i;}
        }
        return n.size();
    }
};