class Solution {
public:
    void fun(vector<int> cand,int target,vector<int>& comb, int index, vector<vector<int>>& res){
        if (target == 0) {
            res.push_back(comb);
            return;
        }
        if (target < 0) return;
        for(int i=index;i<cand.size();i++){
            comb.push_back(cand[i]);
            fun(cand,target-cand[i],comb,i,res);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        fun(candidates, target, comb, 0, res);
        return res;
    }
};