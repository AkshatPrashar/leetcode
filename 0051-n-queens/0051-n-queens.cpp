class Solution {
public:

    void place(int col,int n,vector<vector<string>>& ans,vector<string>& board,
    vector<int>& hashRow,vector<int>& rightDiagonal,vector<int>& leftDiagonal){

        if(col==n){

            ans.push_back(board);
            return;

        }

        for(int row=0;row<n;row++){

            if(hashRow[row]==0 && rightDiagonal[row+col]==0 && leftDiagonal[n-1+row-col]==0){


                board[row][col]='Q';
                hashRow[row]=1;
                rightDiagonal[row+col]=1,leftDiagonal[n-1+row-col]=1;
                place(col+1,n,ans,board,hashRow,rightDiagonal,leftDiagonal);
                board[row][col]='.';
                hashRow[row]=0;
                rightDiagonal[row+col]=0,leftDiagonal[n-1+row-col]=0;

            }

        }

    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n);

        for(int i=0;i<n;i++) board[i]=s;
        
        vector<int> hashRow(n,0),rightDiagonal(2*n-1,0),leftDiagonal(2*n-1,0);

        place(0,n,ans,board,hashRow,rightDiagonal,leftDiagonal);
        return ans;

    }
};