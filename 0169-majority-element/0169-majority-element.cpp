class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=nums[0],c=1;
        for(int i=1;i<nums.size();i++){
            if(a==nums[i]) c++;
            else{
                c--;
                if(c<0){
                    a=nums[i];
                    c=(-c);
                }
            }
        }
        return a;
    }
};