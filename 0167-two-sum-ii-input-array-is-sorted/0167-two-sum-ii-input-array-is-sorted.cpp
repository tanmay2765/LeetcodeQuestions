class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int s=nums[l]+nums[r];
            if(t==s) return {l+1,r+1};
            else if(s<t) l++;
            else r--;
        }
        return {};
    }
};