class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        vector<int>ans(arr.size(),0);
        unordered_map<int,int>mp;
        for(int val:arr){
            mp[val]++;
        }
        for(auto it:mp){
            ans[it.first-1]=it.second;
        }
        return ans;
    }
};
