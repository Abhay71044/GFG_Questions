class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int maxi=INT_MIN;
        int countx=0;
        int county=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 1){
                county=0;
                countx++;
                maxi=max(maxi,countx);
            }
            else{
                countx=0;
                county++;
                maxi=max(maxi,county);
            }
        }
        return maxi;
    }
};