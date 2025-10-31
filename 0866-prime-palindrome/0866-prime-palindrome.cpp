class Solution {
public:
    bool isprime(int n){
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
    }
    bool pal(int n){
        int original_n, reversed_n = 0;
        original_n = n;
        while (n > 0) {
        reversed_n = reversed_n * 10 + (n % 10);
        n /= 10;
        }
        return original_n == reversed_n;
    }
    int primePalindrome(int n) {
        while(true){
            if(isprime(n)&&pal(n)) return n;
            n++;
            if (10000000 < n && n < 100000000) n = 100000000;
        }
    }
};