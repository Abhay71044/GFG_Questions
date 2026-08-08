class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int maxi=0;
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            int total=0;
            for(int j=0;j<arr[i].size();j++){
                total+=arr[i][j];
            }
            if(total>maxi){
                ans=i;
                maxi=total;
            }
        }
        return ans;
    }
};