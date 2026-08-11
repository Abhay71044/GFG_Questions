class Solution {
public:

    string longestPalindrome(string &s) {
        int n = s.size();
        int start = 0;
        int maxLen = 1;
        for (int i = 0; i < n; i++) {
            int low = i;
            int high = i;

            while (low >= 0 && high < n && s[low] == s[high]) {
                if (high - low + 1 > maxLen) {
                    start = low;
                    maxLen = high - low + 1;
                }
                low--;
                high++;
            }
            low = i;
            high = i + 1;

            while (low >= 0 && high < n && s[low] == s[high]) {
                if (high - low + 1 > maxLen) {
                    start = low;
                    maxLen = high - low + 1;
                }
                low--;
                high++;
            }
        }
        return s.substr(start, maxLen);
    }
};