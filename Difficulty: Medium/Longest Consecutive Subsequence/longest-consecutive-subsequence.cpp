class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        if (arr.empty()) return 0;
        sort(arr.begin(),arr.end());
        int count=1;
        int maxi=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i] == arr[i-1]){
                continue;
            }
            else if(arr[i] == arr[i-1]+1){
                count++;
            }
            else{
                count=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};