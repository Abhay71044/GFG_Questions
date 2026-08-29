class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        int n = arr.size() - 2;
        vector<int> freq(n+1,0);
        vector<int> ans;

        for(int i =0; i<arr.size(); i++)
        {
            freq[arr[i]]++;

            if (freq[arr[i]] == 2){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
