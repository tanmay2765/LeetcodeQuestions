class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int,int> freq;
        freq[0] = 1;
        int s = 0, cnt = 0;
        for (int x : A) {
            s += x;
            int r = s % K;
            if (r < 0) r += K;
            cnt += freq[r];
            freq[r] += 1;
        }
        return cnt;
    }
};