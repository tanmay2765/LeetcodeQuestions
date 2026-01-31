class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,mx=0;
        while(l<r){
            int s=min(height[l],height[r]);
            mx=max(mx,s*(r-l));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return mx;
    }
};