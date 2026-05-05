class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0')return;
        queue<int> row,col;
        row.push(i);col.push(j);
        grid[i][j]='0';
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,1,-1};
        while(!row.empty()){
            int r=row.front();row.pop();
            int c=col.front();col.pop();
            for(int k=0;k<4;k++){
                int nr=r+drow[k];
                int nc=c+dcol[k];
                if(nr>=0&&nr<grid.size()&&nc>=0&&nc<grid[0].size()&&grid[nr][nc]=='1'){
                    row.push(nr);
                    col.push(nc);
                    grid[nr][nc]='0';
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j);
                    ans++;
                }
            }
        }return ans;
    }
};