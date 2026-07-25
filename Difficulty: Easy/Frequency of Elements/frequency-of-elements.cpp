class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int val:arr){
            mp[val]++;
        }
        vector<vector<int>>ans;
        for(auto it:mp){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};