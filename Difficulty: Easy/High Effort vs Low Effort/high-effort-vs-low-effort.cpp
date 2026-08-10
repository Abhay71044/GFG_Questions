class Solution {
  public:
    int maxTask(vector<int>& h, vector<int>& l) {
        int n = h.size();
        vector<int> dp(n);
        dp[0] = max(h[0], l[0]);
        if(n == 1)
            return dp[0];
        dp[1] = max(h[1], l[1] + dp[0]);
        for(int i = 2; i < n; i++) {
            dp[i] = max(
                dp[i-1] + l[i],
                dp[i-2] + h[i]
            );
        }
        return dp[n-1];
    }
};