class Solution {
  public:
    string largestEven(string &s) {
        sort(s.begin(),s.end(),greater<char>());
        int i=s.size()-1;
        while(i>=0){
            if((s[i]-'0') % 2 == 0){
                swap(s[i],s[s.size()-1]);
                break;
            }
            i--;
        }
        return s;
    }
};