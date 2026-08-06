class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        int count=0;
        unordered_map<int,int>mp;
        for(auto val:arr){
            mp[val]++;
        }
        for(auto it:mp){
            if(it.second > arr.size()/k){
                count++;
            }
        }
        return count;
    }
};