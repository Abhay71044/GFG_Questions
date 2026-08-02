class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int mini=INT_MAX;
        int secondsm=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(mini>arr[i]){
                secondsm=mini;
                mini=arr[i];
            }
            else if(arr[i]<secondsm && arr[i]>mini){
                secondsm=arr[i];
            }
        }
        if(secondsm == INT_MAX) return {-1};
        return {mini,secondsm};
    }
};