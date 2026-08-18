class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        if(arr.size()<3) return -1;
        sort(arr.begin(),arr.end());
        return arr[arr.size()-3];
    }
};