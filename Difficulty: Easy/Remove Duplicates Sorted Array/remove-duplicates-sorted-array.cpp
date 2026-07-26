class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int i=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return vector<int>(arr.begin(),arr.begin()+i+1);
    }
};