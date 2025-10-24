class Solution {
public:
    bool isprime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; (long long)i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int first = -1, last = -1;
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (isprime(nums[i])) {
                if (first == -1) first = i;
                last = i;
            }
        }
        if (first == -1) return 0; // no primes at all
        return last - first;       // will be 0 if exactly one prime
    }
};
