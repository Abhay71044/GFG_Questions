class Solution {
public:
    string reverseWords(string &s) {
        string ans = "";
        int i = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] == ' ')
                i++;
            if (i >= s.size())
                break;
            int start = i;
            while (i < s.size() && s[i] != ' ')
                i++;
            for (int j = i - 1; j >= start; j--)
                ans += s[j];
            ans += ' ';
        }
        if (!ans.empty())
            ans.pop_back();

        return ans;
    }
};