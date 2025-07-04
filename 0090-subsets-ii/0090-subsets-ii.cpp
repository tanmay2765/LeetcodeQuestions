class Solution {
public:
    set<vector<int>> uniqueVectors;

    void fun(vector<int>& arr, vector<vector<int>>& res, vector<int>& temp, int start) {
        if (uniqueVectors.insert(temp).second)
            res.push_back(temp);

        for (int i = start; i < arr.size(); i++) {
            temp.push_back(arr[i]);
            fun(arr, res, temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {  // <-- Correct function name
        vector<vector<int>> res;
        vector<int> temp;
        uniqueVectors.clear();  // Clear the set before each call (important on LeetCode)
        sort(nums.begin(), nums.end());  // Ensure duplicates are adjacent
        fun(nums, res, temp, 0);
        return res;
    }
};
