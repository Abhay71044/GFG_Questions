class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto val:arr)
            mp[val]++;
        
        int maxi=INT_MIN;
        int ans=0;
        for(auto it:mp){
            if(maxi<it.second || (it.second == maxi && it.first > ans)){
                ans=it.first;
                maxi=it.second;
            }
        }
        return ans;
    }
};