class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> seen;
        seen[0] = -1;
        
        int count = 0, maxLen = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            count += nums[i] == 1 ? 1 : -1;
            
            if (seen.count(count)) {
                maxLen = max(maxLen, i - seen[count]);
            } else {
                seen[count] = i;
            }
        }
        
        return maxLen;
    }
};