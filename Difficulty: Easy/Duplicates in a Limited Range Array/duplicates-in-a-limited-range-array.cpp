class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int val:arr){
            mp[val]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};