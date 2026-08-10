class Solution {
  public:
    string removeCharacter(string &s, int pos) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(i==pos) continue;
            ans.push_back(s[i]);
        }
        return ans;
    }
};