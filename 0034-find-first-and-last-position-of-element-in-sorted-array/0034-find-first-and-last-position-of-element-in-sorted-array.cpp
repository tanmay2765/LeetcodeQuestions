class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1,l=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) {
                f=i;
                break;
            }
        }for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target) {
                l=i;
                break;
            }
        }
        return {f,l};
    }
};