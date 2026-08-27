class Solution {
  public:
    int maxTripletSum(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1]+arr[arr.size()-2]+arr[arr.size()-3];
    }
};