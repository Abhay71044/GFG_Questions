class Solution {
  public:
    int redOrGreen(string &s) {
        int minR=0;
        int minG=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R') minR++;
            else minG++;
        }
        return min(minR,minG);
    }
};