class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int totalelement=mat.size()*mat[0].size();
        int startrow=0;
        int startcol=0;
        int endrow=mat.size()-1;
        int endcol=mat[0].size()-1;
        int count=0;
        vector<int>ans;
        while(count<totalelement){
            for(int i=startcol;i<=endcol && count<totalelement;i++){
                ans.push_back(mat[startrow][i]);
                count++;
            }
            startrow++;
            
            for(int i=startrow;i<=endrow && count<totalelement;i++){
                ans.push_back(mat[i][endcol]);
                count++;
            }
            endcol--;
            
            for(int i=endcol;i>=startcol && count<totalelement;i--){
                ans.push_back(mat[endrow][i]);
                count++;
            }
            endrow--;
            
            for(int i=endrow;i>=startrow && count<totalelement;i--){
                ans.push_back(mat[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
};