class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        if(s1.size() != s2.size()) return false;
        int i=0;
        while(i<s1.size()){
            if(s1[i] != s2[i]) return false;
            i++;
        }
        return true;
    }
};