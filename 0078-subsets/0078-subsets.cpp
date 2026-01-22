class Solution {
public:
    void sub(vector<int>& nums,vector<int> temp,vector<vector<int>> &res,int s){
        res.push_back(temp);
        for(int i=s;i<nums.size();i++){
            temp.push_back(nums[i]);
            sub(nums,temp,res,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        sub(nums,temp,res,0);
        return res;
    }
};