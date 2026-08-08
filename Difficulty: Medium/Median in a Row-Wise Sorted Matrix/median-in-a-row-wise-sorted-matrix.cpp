class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int>temp;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                temp.push_back(mat[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        return temp[temp.size() / 2];
    }
};
