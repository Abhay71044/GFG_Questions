class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        int mid=arr.size()/2;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<mid;i++){
            leftsum+=arr[i];
        }
        for(int j=mid;j<arr.size();j++){
            rightsum+=arr[j];
        }
        return abs(leftsum-rightsum);
    }
};
