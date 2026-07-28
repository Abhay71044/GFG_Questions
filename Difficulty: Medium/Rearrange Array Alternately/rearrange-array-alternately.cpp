class Solution {
public:
    void rearrange(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            ans.push_back(arr[j--]);
            ans.push_back(arr[i++]);
        }
        if (i == j)
            ans.push_back(arr[i]);

        arr = ans;
    }
};