class Solution {
  public:
    string makeEven(string &s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')%2 == 0){
                swap(s[i],s[s.size()-1]);
                if(res=="" || s>res){
                    res=s;
                }
                swap(s[i],s[s.size()-1]);
            }
        }
        if (res == "") return s;
        return res;
    }
};