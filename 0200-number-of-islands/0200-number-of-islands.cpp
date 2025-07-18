class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c) {
        if (i < 0 || j < 0 || i >= r || j >= c || grid[i][j] != '1') return;
        grid[i][j] = '0';  // Mark as visited
        dfs(grid, i + 1, j, r, c);
        dfs(grid, i - 1, j, r, c);
        dfs(grid, i, j + 1, r, c);
        dfs(grid, i, j - 1, r, c);
    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size(), ans = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j, r, c);
                    ans++;
                }
            }
        }
        return ans;
    }
};