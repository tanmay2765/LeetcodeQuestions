class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0,farthest=0,currfar=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==currfar){
            jumps++;
            currfar=farthest;
            }
        }
        return jumps;
    }
};