class Solution {
  public:
    int minDiff(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            int diff=arr[i+1]-arr[i];
            mini=min(mini,diff);
        }
        return mini;
    }
};