class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int evencount=0;
        int oddcount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2 == 0) evencount++;
            else oddcount++;
        }
        return {oddcount,evencount};
    }
};