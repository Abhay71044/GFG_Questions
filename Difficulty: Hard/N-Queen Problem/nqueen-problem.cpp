class Solution {
  public:
  
    bool issafe(vector<vector<char>>&board,int col,int row,int n){
        int i=row;
        int j=col;
        //check col
        while(j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            j--;
        }
        i=row;
        j=col;
        //upper diagonal
        while(i>=0 && j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            i--;j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0){
            if(board[i][j] == 'Q'){
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
  
    void solve(vector<vector<char>>&board,vector<vector<int>>&ans,int col,int n){
        if(col>=n){
            vector<int>temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(board[i][j]=='Q'){
                        temp.push_back(j+1);
                    }
                }
            }
            ans.push_back(temp);
        }
        for(int row=0;row<n;row++){
            if(issafe(board,col,row,n)){
                board[row][col]='Q';
                solve(board,ans,col+1,n);
                board[row][col]='.';
            }
        }
    }
  
    vector<vector<int>> nQueen(int n) {
        vector<vector<char>>board(n,vector<char>(n,'.'));
        int col=0;
        vector<vector<int>>ans;
        solve(board,ans,col,n);
        return ans;
    }
};