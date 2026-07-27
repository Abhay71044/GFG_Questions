class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];
            if (mp.find(complement) != mp.end()) {
                return true;
            }
            mp[arr[i]] = i;
        }
        return false;
    }
};