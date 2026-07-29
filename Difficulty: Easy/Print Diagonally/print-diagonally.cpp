class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        vector<int>ans;
        for(int col=0;col<mat.size();col++){
            int i=0, j= col;
            while(i<mat.size() && j>=0){
                ans.push_back(mat[i][j]);
                i++;j--;
            }
        }
        for(int row=1;row<mat.size();row++){
            int i=row,j=mat.size()-1;
            while(i<mat.size() && j>=0){
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        return ans;
    }
};