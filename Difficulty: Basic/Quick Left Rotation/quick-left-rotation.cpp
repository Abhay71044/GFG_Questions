class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        k=k%arr.size();
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.end());
    }
};