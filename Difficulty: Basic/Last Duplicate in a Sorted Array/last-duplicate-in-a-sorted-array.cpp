class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        for(int i=arr.size()-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(arr[i]==arr[j]){
                    return {i,arr[i]};
                }
            }
        }
        return {-1,-1};
    }
};