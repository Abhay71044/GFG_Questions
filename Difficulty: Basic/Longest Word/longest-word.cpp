class Solution {
  public:
    string longest(vector<string>& arr) {
        string ans="";
        for(string s:arr){
            if(s.size()>ans.size()){
                ans=s;
            }
        }
        return ans;
    }
};
