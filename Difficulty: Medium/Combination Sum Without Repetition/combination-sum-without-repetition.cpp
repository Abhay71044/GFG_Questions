class Solution {
  public:
  
    void solve(vector<int> &arr,vector<vector<int>>&ans,vector<int>&output,int target,int idx){
        if(target==0){
            ans.push_back(output);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<arr.size();i++){
            if(i > idx && arr[i] == arr[i - 1])
                continue;
            if(arr[i] > target)
                break;
            output.push_back(arr[i]);
            solve(arr,ans,output,target-arr[i],i+1);
            output.pop_back();
        }
    }
  
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        sort(arr.begin(), arr.end());
        solve(arr,ans,output,target,0);
        return ans;
    }
};