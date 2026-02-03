class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int min=INT_MAX;
        int mx=nums[0],curr=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            mx=max(mx,curr);
        }return mx;
    }
};