class Solution {
public:
    void sub(vector<vector<int>>& res,vector<int> nums,vector<int> temp,int s){
        res.push_back(temp);
        for(int i=s;i<nums.size();i++){
            temp.push_back(nums[i]);
            sub(res,nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        sub(res,nums,temp,0);
        return res;
    }
};