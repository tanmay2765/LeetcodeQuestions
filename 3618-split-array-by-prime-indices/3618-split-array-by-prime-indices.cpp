class Solution {
public:
    bool prime(int a){
        if(a<=1){ 
            return false;
        }
        for(int i=2;i*i<=a;i++){
            if(a%i==0) return false;
        }
        return true;
    }
        
    long long splitArray(vector<int>& nums) {
        vector<int> suma;
        vector<int> sumb;
        long long a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(prime(i)) suma.push_back(nums[i]);
            else sumb.push_back(nums[i]);
        }
        for(int i=0;i<suma.size();i++){
            a+=suma[i];
        }
        for(int i=0;i<sumb.size();i++){
            b+=sumb[i];
        }
        return llabs(a-b);
    }
};