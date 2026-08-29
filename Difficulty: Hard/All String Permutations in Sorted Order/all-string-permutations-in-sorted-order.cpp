class Solution {
  public:
  
    void solve(string &s,vector<string>&ans,int idx){
        if(idx>=s.size()){
            ans.push_back(s);
            return;
        }
        for(int i=idx;i<s.size();i++){
            swap(s[i],s[idx]);
            solve(s,ans,idx+1);
            swap(s[i],s[idx]);
        }
    }
  
    vector<string> permutation(string s) {
        vector<string>ans;
        solve(s,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};