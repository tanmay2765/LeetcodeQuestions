class Solution {
public:
    int f(vector<int>& nums, int t){
        int l=0,r=nums.size()-1;
        int a=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(t==nums[m]){
                a=m;
                r=m-1;
            }else if(nums[m]<t) l=m+1;
            else r=m-1;
        }return a;
    }
    int l(vector<int>& nums, int t){
        int l=0,r=nums.size()-1;
        int a=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(t==nums[m]){
                a=m;
                l=m+1;
            }else if(nums[m]<t) l=m+1;
            else r=m-1;
        }return a;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {f(nums,target),l(nums,target)};
    }
};