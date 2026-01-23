class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        if(n<3) return min(height[0],height[1]);
        int l=0,r=n-1,mx=0;
        while(l<r){
            int s=min(height[l],height[r]);
            int w=r-l;
            mx=max(mx,w*s);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return mx;
    }
};