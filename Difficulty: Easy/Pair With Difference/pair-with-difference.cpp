
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        sort(arr.begin(),arr.end());
        while(start<n && end<n){
           if(start!=end && arr[end]-arr[start]==x){
               return true;
           }
           else if(arr[end]-arr[start]<x){
               end++;
           }
           else{
               start++;
           }
        }
        return false;
    }
};
