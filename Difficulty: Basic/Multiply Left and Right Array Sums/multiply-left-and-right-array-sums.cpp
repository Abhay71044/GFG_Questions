class Solution {
  public:
    int multiply(vector<int> &arr) {
        int n = arr.size();
        int leftsum = 0, rightsum = 0;
        for(int i=0; i<n/2; i++){
            leftsum += arr[i];
        }
        for(int i=n/2; i<n; i++){
            rightsum += arr[i];
        }
        return leftsum*rightsum;
    }
};