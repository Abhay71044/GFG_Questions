class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i] == c) continue;
            ans.push_back(s[i]);
        }
        s=ans;
    }
};