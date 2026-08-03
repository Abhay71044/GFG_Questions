class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n=arr.size();
        int i=0;
        while(arr[i]<arr[i+1]&&i<n-1){i++;}
        return i;
    }
};