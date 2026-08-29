class Solution {
  public:
  
    void solve(vector<int>& arr,vector<vector<int>>&ans,vector<int>&output,int i){
        if(i>=arr.size()){
            ans.push_back(output);
            return ;
        }
        solve(arr,ans,output,i+1);
        output.push_back(arr[i]);
        solve(arr,ans,output,i+1);
        output.pop_back();
    }
  
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(arr,ans,output,0);
        return ans;
    }
};