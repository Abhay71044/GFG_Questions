class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> ans;
        for (int x : arr) {
            if (!ans.empty() && ((ans.back() >= 0 && x < 0) || (ans.back() < 0 && x >= 0))){
                ans.pop_back();
            }
            else {
                ans.push_back(x);
            }
        }
        return ans;
    }
};