class Solution {
public:
    bool fun(int m, vector<int>& p, int h) {
        long long hr = 0;
        for (int i = 0; i < p.size(); i++) {
            hr += ceil((p[i]*1.0)/m);
        }
        return hr <= h;
    }

    int minEatingSpeed(vector<int>& p, int h) {
        int l = 1, r = 1e9, ans;
        while (l <= r) {
            int m = (l + r ) / 2; 
            if (fun(m, p, h)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};
