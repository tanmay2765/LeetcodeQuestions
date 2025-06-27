class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(t==nums[m]){
                return m;
            }
            else if(nums[m]<t){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return -1;
    }
};