class Solution {
public:
    string findSum(string &s1, string &s2) {
        string ans;
        ans.reserve(max(s1.size(), s2.size()) + 1);

        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int n1 = (i >= 0) ? s1[i--] - '0' : 0;
            int n2 = (j >= 0) ? s2[j--] - '0' : 0;
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            ans.push_back(sum % 10 + '0');
        }
        reverse(ans.begin(), ans.end());
        int k = 0;
        while (k < (int)ans.size() - 1 && ans[k] == '0') k++;
        return ans.substr(k);
    }
};