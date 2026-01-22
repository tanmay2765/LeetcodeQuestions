class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=nums[0];
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            maxs=max(curr,maxs);
        }
        return maxs;
    }
};