class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int,int>mp;
        for(int val:a){
            mp[val]++;
        }
        for(int it:b){
            if(mp[it]==0){
                return false;
            }
            mp[it]--;
        }
        return true;
    }
};