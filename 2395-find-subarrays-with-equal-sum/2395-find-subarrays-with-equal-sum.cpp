class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        
        // Edge case: need at least 2 elements
        if (n < 2) {
            return false;
        }
        
        unordered_map<int, int> sum_count;
        
        // Explicit bounds checking
        for (int i = 0; i + 1 < n; i++) {
            int current_sum = nums[i] + nums[i + 1];
            
            if (++sum_count[current_sum] > 1) {
                return true;
            }
        }
        
        return false;
    }
};