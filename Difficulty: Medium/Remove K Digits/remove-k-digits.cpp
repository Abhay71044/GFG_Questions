class Solution {
  public:
    string removeKdig(string &s, int k) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            while(k && !st.empty() && st.top()>(s[i]-'0')){
                st.pop();
                k--;
            }
            st.push(s[i]-'0');
        }
        while(k && !st.empty()){
            st.pop();
            k--;
        }
        string ans;
        string ret;
        while(!st.empty()){
            ans+=(st.top()+'0');
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        bool x=true;
        for(int i=0;i<ans.size();i++){
            if(ans[i]-'0'){
               x=false;
               ret+=ans[i];
            }
            else if(!x){
               ret+=ans[i];
            }
        }
        if(ret=="")return "0";
        return ret;
    }
};

