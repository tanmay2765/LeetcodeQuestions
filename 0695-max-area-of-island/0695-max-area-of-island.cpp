class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int r, int c,int &temp) {
        if (i < 0 || j < 0 || i >= r || j >= c || grid[i][j] != 1) return;
        temp++;
        grid[i][j] = 0;  
        dfs(grid, i + 1, j, r, c,temp);
        dfs(grid, i - 1, j, r, c,temp);
        dfs(grid, i, j + 1, r, c,temp);
        dfs(grid, i, j - 1, r, c,temp);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size(), ans = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    int res=0;
                    dfs(grid, i, j, r, c,res);
                    ans=max(ans,res);
                }
            }
        }
        return ans;
    }
};