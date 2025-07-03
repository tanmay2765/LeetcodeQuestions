class Solution {
public:
    void fun(vector<int>& arr, vector<vector<int>>& res, vector<int>& temp, int start) {
        res.push_back(temp);  // Store the current subset
        for (int i = start; i < arr.size(); i++) {
            temp.push_back(arr[i]);        // Choose
            fun(arr, res, temp, i + 1);     // Explore
            temp.pop_back();               // Un-choose
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(nums, res, temp, 0);
        return res;
    }
};
