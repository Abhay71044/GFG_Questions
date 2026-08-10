class Solution {
  public:

    string firstAlphabet(string &s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            while( i<s.size() && s[i] == ' ') i++;
            if (i >= s.size()) {
                break;
            }
            ans.push_back(s[i]);
            while(i<s.size() && s[i] != ' ') i++;
        }
        return ans;
    }
};