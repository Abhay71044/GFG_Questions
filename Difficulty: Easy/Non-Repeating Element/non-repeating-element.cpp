
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto val:arr){
            mp[val]++;
        }
        for (int x : arr) {
            if (mp[x] == 1) {
                return x;
            }
        }
        return 0;
    }
};
