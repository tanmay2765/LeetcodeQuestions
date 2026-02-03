class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min=INT_MAX;
        int maxpro=0;
        for(int i=0;i<nums.size();i++){
            if(min>nums[i]) min=nums[i];
            if(maxpro<nums[i]-min) maxpro=nums[i]-min;
        }return maxpro;
    }
};