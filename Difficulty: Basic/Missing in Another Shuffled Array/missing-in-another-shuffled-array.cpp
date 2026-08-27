class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(auto val:arr1){
            mp[val]++;
        }
        for(auto val:arr2){
            mp[val]++;
        }
        for(auto it:mp){
            if((it.second % 2) != 0){
                return it.first;
            }
        }
        return -1;
    }
};