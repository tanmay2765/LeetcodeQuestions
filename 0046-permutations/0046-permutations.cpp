#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void fun(vector<int>& arr, vector<vector<int>>& res, vector<int>& temp, int start) {
        if (temp.size() == arr.size()) { 
            res.push_back(temp);
            return; // Important to return when a full permutation is formed
        }
        for (int i = 0; i < arr.size(); i++) {
            if (find(temp.begin(), temp.end(), arr[i]) != temp.end()) continue;
            temp.push_back(arr[i]);
            fun(arr, res, temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(nums, res, temp, 0);
        return res;
    }
};
