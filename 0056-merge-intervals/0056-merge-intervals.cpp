class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        if(inter.empty()) return {};
        sort(inter.begin(),inter.end());
        vector<vector<int>> merge;
        merge.push_back(inter[0]);
        for(int i=1;i<inter.size();i++){
            if(inter[i][0]<=merge.back()[1]) merge.back()[1]=max(inter[i][1],merge.back()[1]);
            else merge.push_back(inter[i]);
        }
        return merge;
    }
};