class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1|| grid[n-1][n-1]==1) return -1;
        if(n==1) return 1;
        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        int len=1;
        while(q.size()>0){
            int rot_in_single_min=q.size();
            for(int i=0;i<rot_in_single_min;i++){
                pair<int,int> temp=q.front();q.pop();
                if(temp.first==n-1 && temp.second==n-1) return len;
                for(int j=0;j<8;j++){
                    int x=temp.first+dx[j];
                    int y=temp.second+dy[j];
                    if(x>=0&&y>=0&&x<n&&y<n&&grid[x][y]==0){
                        grid[x][y]=1;
                        q.push({x,y});
                    }
                }
            }if(q.size()>0) len++;
        }return len;
    }
};