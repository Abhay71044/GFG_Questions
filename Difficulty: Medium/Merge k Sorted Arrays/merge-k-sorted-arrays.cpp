class Solution {
  public:
  
    vector<int> merge(vector<int> arr1,vector<int> arr2){
        vector<int>ans(arr1.size()+arr2.size());
        int i=0;
        int j=0;
        int k=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<=arr2[j]){
                ans[k++]=arr1[i++];
            }
            else{
                ans[k++]=arr2[j++];
            }
        }
        while(i<arr1.size()){
            ans[k++]=arr1[i++];
        }
        while(j<arr2.size()){
            ans[k++]=arr2[j++];
        }
        return ans;
    }
  
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        if(mat.empty())
            return {};
        vector<int> ans = mat[0];
        for(int i = 1; i < mat.size(); i++) {
            ans = merge(ans, mat[i]);
        }
        return ans;
    }
};