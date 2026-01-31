class Solution {
public:

    bool fun(vector<int>& piles,int m, int h){
        long long hr=0;
        for(int i=0;i<piles.size();i++){
            hr+=ceil((piles[i]*1.0)/m);
        }return hr<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1e9,ans;
        while(l<=r){
            int m=(l+r)/2;
            if(fun(piles,m,h)){
                ans=m;
                r=m-1;
            }else l=m+1;
        }return ans;
    }
};