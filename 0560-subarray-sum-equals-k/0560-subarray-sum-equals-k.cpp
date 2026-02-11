class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0]=1;
        int s=0,c=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            c+=map[s-k];
            map[s]++;
        }return c;
    }
};