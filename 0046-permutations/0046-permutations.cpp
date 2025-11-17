class Solution {
public:
    void fun(vector<int>& arr, vector<vector<int>>& res, vector<int>& temp, vector<bool>& used) {
        if (temp.size() == arr.size()) {
            res.push_back(temp);
            return;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            temp.push_back(arr[i]);

            fun(arr, res, temp, used);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        fun(nums, res, temp, used);
        return res;
    }
};
