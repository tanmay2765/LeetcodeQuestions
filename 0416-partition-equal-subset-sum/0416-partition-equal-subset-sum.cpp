class Solution {
public:
    bool fun(vector<int>& nums, int t) {
        int n = nums.size();
        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(t + 1, 0));
        for (int i = 0; i <= n; i++) dp[i][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= t; j++) {
                if (nums[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
            }
        }

        return dp[n][t] > 0;
    }

    bool canPartition(vector<int>& nums) {
        int s = 0;
        for (int i = 0; i < nums.size(); i++) {
            s += nums[i];
        }
        if (s % 2 != 0) return false;
        return fun(nums, s / 2); 
    }
};
