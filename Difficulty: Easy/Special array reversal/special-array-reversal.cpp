
class Solution {
  public:
    string reverse(string s) {
        int l=0;
        int e=s.size()-1;
        while(l<=e){
            if(isalpha(s[l]) && isalpha(s[e])){
                swap(s[l],s[e]);
                l++;
                e--;
            }
            else if(!isalpha(s[l])){
                l++;
            }
            else{
                e--;
            }
        }
        return s;
    }
};