class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int currSum=0;
        int maxSum=arr[0];
        for(int i=0;i<arr.size();i++){
            currSum=max(currSum+arr[i],arr[i]);
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};