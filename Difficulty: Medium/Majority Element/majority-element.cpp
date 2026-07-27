class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto val: arr){
            mp[val]++;
        }
        for(auto it:mp){
            if(it.second > (arr.size()/2)){
                return it.first;
            }
        }
        return -1;
    }
};