class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        int cnt = 0;
        unordered_map<int,int> mp;
        for(auto x : a){
            mp[x]++;
        }
        for(auto y : b){
            mp[y]++;
            if(mp[y] == 2) cnt++;
        }
        return cnt;
    }
};