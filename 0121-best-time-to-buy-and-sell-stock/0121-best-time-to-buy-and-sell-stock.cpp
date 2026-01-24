class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxpro=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]) min=prices[i];
            else if(maxpro<prices[i]-min) maxpro=prices[i]-min;
        }return maxpro;
    }
};
