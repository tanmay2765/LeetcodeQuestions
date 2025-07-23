class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if(n <= 2) return 0;
        vector<int> lmax(n), rmax(n);
        int s = 0;
        lmax[0] = h[0];
        for(int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i-1], h[i]);
        }
        rmax[n-1] = h[n-1];
        for(int i = n-2; i >= 0; i--) {
            rmax[i] = max(rmax[i+1], h[i]);
        }
        for(int i = 0; i < n; i++) {
            int w = min(lmax[i], rmax[i]) - h[i];
            if(w > 0) {
                s += w;
            }
        }
        return s;
    }
};