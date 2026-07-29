class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>row(m);
        vector<int>col(n);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(row[i] == 1 || col[j] == 1){
                    mat[i][j]=0;
                }
            }
        }
    }
};