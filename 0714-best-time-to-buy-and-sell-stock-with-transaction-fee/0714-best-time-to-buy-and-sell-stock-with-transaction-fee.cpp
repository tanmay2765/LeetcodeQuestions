class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int hold=-prices[0];
        int got=0;
        for(int i=1;i<prices.size();i++){
            hold=max(hold,got-prices[i]);
            got=max(got,hold+prices[i]-fee);
        }return got;
    }
};