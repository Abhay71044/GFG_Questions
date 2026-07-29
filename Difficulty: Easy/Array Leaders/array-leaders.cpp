class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int maxi=0;
        vector<int>ans;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};