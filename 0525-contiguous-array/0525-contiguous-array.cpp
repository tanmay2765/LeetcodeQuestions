class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>map;
        map[0] = -1;
        int sum=0,maxlen=0;
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i]==1?1:-1;
            if (map.count(sum)) maxlen=max(maxlen,i-map[sum]);
            else map[sum] = i;
        }
        return maxlen;
    }
};