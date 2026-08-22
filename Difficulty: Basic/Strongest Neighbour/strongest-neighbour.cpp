class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        vector<int>ans(arr.size()-1);
        for(int i=0;i<arr.size()-1;i++){
            ans[i]=max(arr[i],arr[i+1]);
        }
        return ans;
    }
};