class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        int mini=INT_MAX;
        int ans=-1;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                count+=mat[i][j];
            }
            if(count < mini){
                mini=count;
                ans=i;
            }
        }
        return ans+1;
    }
};