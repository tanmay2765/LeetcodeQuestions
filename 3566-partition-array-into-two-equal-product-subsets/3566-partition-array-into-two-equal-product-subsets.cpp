class Solution {
public:
    bool solve(int i, long long p1, long long p2, long long t, const vector<int>& arr) {
        if(i==arr.size()) return p1==t && p2==t;
        if(p1>t || p2>t) return false;
        if(solve(i+1,p1*arr[i],p2,t,arr)) return true;
        if(solve(i+1,p1,p2*arr[i],t,arr)) return true;
        return false;
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        return solve(0,1,1,target,nums);
    }
};