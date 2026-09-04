class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(ans.empty() || ans.back() != arr[i]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};