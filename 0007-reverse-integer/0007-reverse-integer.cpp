class Solution {
public:
    int reverse(int x) {
        long a = 0; // use long to handle overflow temporarily
        while (x != 0) {
            a = a * 10 + x % 10;
            x = x / 10;
        }
        // Check for overflow before returning
        if (a > INT_MAX || a < INT_MIN) return 0;
        return (int)a;
    }
};
