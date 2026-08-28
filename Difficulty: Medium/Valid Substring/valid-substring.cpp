class Solution {
  public:
    int maxLength(string& s) {
        int ans=0;
        int open=0;
        int close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            if(s[i]==')') close++;
            if(open==close) ans=max(ans,open+close);
            if(open<close){
                open=0;
                close=0;
            }
        }
        open=0;
        close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            if(s[i]==')') close++;
            if(open==close) ans=max(ans,open+close);
            if(open>close){
                open=0;
                close=0;
            }
        }
        return ans;
    }
};