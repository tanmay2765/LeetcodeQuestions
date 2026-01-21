class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n){
            int c=nums[i]-1;
            if(nums[i]!=nums[c]) swap(nums[i],nums[c]);
            else i++;
        }
        for (int i = 0; i < n; i++) {
            if(nums[i]!=i+1) return nums[i];
        }
        return 0 ;
    }
};