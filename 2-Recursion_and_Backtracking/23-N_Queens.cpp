class Solution {
public:

    bool isPossible(int row,int col,vector<string>& board,int n){

        int i=row;
        int j=col;

        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }

        row=i;
        col=j;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }

        row=i;
        col=j;
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }

        return true;
    }

    void placeQueens(int col,vector<string>& board,vector<vector<string>>& ans,int n){
        if(col == n){
            ans.push_back(board);
        }

        for(int row=0;row<n;row++){
            if(isPossible(row,col,board,n)){
                board[row][col]='Q';
                placeQueens(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string str(n,'.');

        for(int i=0;i<n;i++){
            board[i]=str;
        }

        placeQueens(0,board,ans,n);

        return ans;
    }
};