class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,rgt=nums.size()-1;
        while(left<=rgt){
            int mid=(left+rgt)/2;
            if(nums[mid]==target) return mid;
            if(nums[left]<=nums[mid]){
                if(nums[left]<= target&&nums[mid]>target) rgt=mid-1;
                else left=mid+1;
            }else{
                if(nums[rgt]>=target&&nums[mid]<target) left=mid+1;
                else rgt=mid-1;
            }
        }
        return -1;
    }
};