class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        while(l<r){
            swap(arr[l-1],arr[r-1]);
            l++;r--;
        }
        return arr;
    }
};