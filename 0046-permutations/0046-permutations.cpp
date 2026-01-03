class Solution {
public:
    void fun(vector<vector<int>>& res,vector<int> nums,vector<int> temp,vector<bool> used){
        if(nums.size()==temp.size()) res.push_back(temp);
        for(int i=0;i<nums.size();i++){
            if(used[i]==true) continue;
            temp.push_back(nums[i]);
            used[i]=true;
            fun(res,nums,temp,used);
            temp.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(nums.size(),false);
        fun(res,nums,temp,used);
        return res;
    }
};