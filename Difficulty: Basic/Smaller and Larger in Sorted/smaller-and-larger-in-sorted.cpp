class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int smaller=0;
        int greater=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target){
                smaller++;
                greater++;
            }
            else if(arr[i]<target) smaller++;
            else greater++;
        }
        return {smaller,greater};
    }
};