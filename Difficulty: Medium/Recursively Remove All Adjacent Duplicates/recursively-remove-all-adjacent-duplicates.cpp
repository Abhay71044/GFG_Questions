class Solution {
public:
    string removeUtil(string s) {
        string ans = "";
        int i = 0;
        while(i < s.size()) {
            int j = i;
            while(j < s.size() && s[i] == s[j]) {
                j++;
            }
            if(j - i == 1) {
                ans += s[i];
            }
            i = j;
        }
        if(ans == s) {
            return ans;
        }
        return removeUtil(ans);
    }
};