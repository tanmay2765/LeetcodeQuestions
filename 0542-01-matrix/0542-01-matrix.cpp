class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size(),c=mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        int min=1;
        while(q.size()>0){
            int rot_in_single_min=q.size();
            for(int i=0;i<rot_in_single_min;i++){
                pair<int,int> temp=q.front();q.pop();
                for(int j=0;j<4;j++){
                    int x=temp.first+dx[j];
                    int y=temp.second+dy[j];
                    if(x>=0&&y>=0&&x<r&&y<c&&mat[x][y]==-1){
                        mat[x][y]=min;
                        q.push({x,y});
                    }
                }
            }if(q.size()>0)min++;
        }return mat;
    }
};  