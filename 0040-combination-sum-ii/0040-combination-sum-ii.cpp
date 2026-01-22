class Solution {
public:
    void fun(vector<int> &temp,vector<int>& nums,vector<vector<int>> &res,int t,int s){
        if(t==0){
            res.push_back(temp);
            return;
        }if(t<0) return;
        for(int i=s;i<nums.size();i++){
            if(i>s && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            fun(temp,nums,res,t-nums[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        fun(temp,candidates,res,target,0);
        return res;
    }
};