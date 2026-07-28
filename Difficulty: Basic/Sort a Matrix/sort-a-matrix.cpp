class Solution {
  public:
    vector<vector<int>> sortedMatrix(vector<vector<int>> mat) {
        vector<int>temp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[i][j]=temp[k++];
            }
        }
        return mat;
    }
};