class Solution {
public:
    int find(int x){
        unsigned int n=0;
        while(x>0){
            n=n*10+x%10;
            x/=10;
        }return n;
    }
    bool isPalindrome(int x) {
        if(x<0)return false;
        int n=find(x);
        return n==x;
    }
};