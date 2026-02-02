class Solution {
public:
    int ans=0;
    void solve(vector<int>&d1,vector<int>&d2,vector<string> &board,int n,vector<int> &col,int row){
        if(row==n){
            ans++;
            return;
        }for(int c=0;c<n;c++){
            if(col[c] || d1[row+c] || d2[row-c+n-1]) continue;
            board[row][c]='Q';
            col[c]=d1[row+c]=d2[row-c+n-1]=1;
            solve(d1,d2,board,n,col,row+1);
            board[row][c]='.';
            col[c]=d1[row+c]=d2[row-c+n-1]=0;
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<int> col(n),d1(2*n,0),d2(2*n,0);
        solve(d1,d2,board,n,col,0);
        return ans;
    }
};