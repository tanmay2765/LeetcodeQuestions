class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0]=1;
        int c=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            c+=map[sum-k];
            map[sum]++;
        }
        return c;
    }
};