class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat[0].size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int j=0;j<mat.size();j++){
            int top=0;
            int bottom=mat.size()-1;
            while(top<bottom){
                swap(mat[top][j],mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};
