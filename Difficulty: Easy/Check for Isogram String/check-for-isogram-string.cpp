class Solution {
  public:
    bool isIsogram(string& s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(auto it:mp){
            if(it.second > 1){
                return false;
            }
        }
        return true;
    }
};