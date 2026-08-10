class Solution {
  public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(vector<string> &arr) {
        unordered_map<string,int>mp;
        for(string val:arr){
            mp[val]++;
        }
        int maxi = 0;
        string word = "";
        for (auto it : mp) {
            if (it.second > maxi) {
                maxi = it.second;
                word = it.first;
            }
            else if (it.second == maxi && it.first < word) {
                word = it.first;
            }
        }
        return {word, to_string(maxi)};
    }
};