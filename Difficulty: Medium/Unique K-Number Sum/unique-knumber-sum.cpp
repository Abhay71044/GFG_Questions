class Solution {
  public:
  
    void solve(vector<vector<int>>&ans,vector<int>&arr,vector<int>&output,int k,int n,int idx){
        if(output.size() == k){
            if(n==0){
                ans.push_back(output);
            }
            return;
        }
        for(int i=idx;i<arr.size();i++){
            if(arr[i]>n) break;
            output.push_back(arr[i]);
            solve(ans,arr,output,k,n-arr[i],i+1);
            output.pop_back();
        }
    }
  
    vector<vector<int>> combinationSum(int n, int k) {
        vector<vector<int>>ans;
        vector<int>output;
        vector<int>arr{1,2,3,4,5,6,7,8,9};
        solve(ans,arr,output,k,n,0);
        return ans;
    }
};