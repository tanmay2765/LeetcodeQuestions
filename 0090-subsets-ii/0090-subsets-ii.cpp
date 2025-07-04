class Solution {
public:

    void fun(vector<int>& arr, vector<vector<int>>& res, vector<int>& temp, int start) {
        res.push_back(temp);
        for (int i = start; i < arr.size(); i++) {
            if (i>start && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            fun(arr, res, temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {  // <-- Correct function name
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(), nums.end());  // Ensure duplicates are adjacent
        fun(nums, res, temp, 0);
        return res;
    }
};
