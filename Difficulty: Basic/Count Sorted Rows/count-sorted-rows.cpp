class Solution {
  public:
    int sortedCount(vector<vector<int>> &mat) {
        int count = 0;
        for(int i = 0; i < mat.size(); i++) {
            int increCount = 0, decreCount = 0;
            for(int j = 0; j < mat[0].size() - 1; j++) {
                if(mat[i][j] < mat[i][j + 1]) {
                    increCount++;
                } 
                else if(mat[i][j] > mat[i][j + 1]) {
                    decreCount++;
                } 
            }
            if(increCount == mat[0].size() - 1) {
                count++;
            }
            else if(decreCount == mat[0].size() - 1) {
                count++;
            }
        }
        return count;
    }
};