class Solution {
public:

    void solve(vector<int>& arr, vector<vector<int>>& ans, int idx) {
        if(idx == arr.size()) {
            ans.push_back(arr);
            return;
        }
        set<int> used;
        for(int i = idx; i < arr.size(); i++) {
            if(used.count(arr[i]))
                continue;
            used.insert(arr[i]);
            swap(arr[i], arr[idx]);
            solve(arr, ans, idx + 1);
            swap(arr[i], arr[idx]);
        }
    }

    vector<vector<int>> uniquePerms(vector<int>& arr) {
        vector<vector<int>> ans;
        solve(arr, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};