class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                if(ans.empty() || ans.back() != arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};