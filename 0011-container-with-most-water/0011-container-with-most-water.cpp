class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1,mx=0;
        while(l<=r){
            int s=min(h[l],h[r]);
            mx=max(mx,s*(r-l));
            if(h[l]<h[r]) l++;
            else r--;
        }return mx;
    }
};