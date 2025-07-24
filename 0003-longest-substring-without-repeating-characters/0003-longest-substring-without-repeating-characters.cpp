class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int maxLen = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            if (charMap.find(s[right]) != charMap.end() && charMap[s[right]] >= left) {
                left = charMap[s[right]] + 1;
            }
            charMap[s[right]] = right;  
            maxLen = max(maxLen, right - left + 1);
        } 
        return maxLen;
    }
};