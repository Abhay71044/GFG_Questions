class Solution {
  public:
  
    void subsequence(string &s,vector<string>& ans,int i,string output){
        if(i>=s.length()){
            ans.push_back(output);
            return;
        }
        subsequence(s,ans,i+1,output);
        output.push_back(s[i]);
        subsequence(s,ans,i+1,output);
    }
  
    vector<string> powerSet(string &s) {
        vector<string>ans;
        string output="";
        subsequence(s,ans,0,output);
        sort(ans.begin(),ans.end());
        return ans;
    }
};