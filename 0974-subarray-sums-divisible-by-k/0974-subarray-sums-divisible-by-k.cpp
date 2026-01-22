class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int c=0,s=0;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            int r=s%k;
            if(r<0) r+=k;
            c+=map[r];
            map[r]++;
        }
        return c;
    }
};