class Solution {
  public:
  
    string common(string s1,string s2){
        string ans="";
        int n=min(s1.length(),s2.length());
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                ans.push_back(s1[i]);
            }
            else{
                break;
            }
        }
        return ans;
    }
  
    string longestCommonPrefix(vector<string> arr) {
        string res=arr[0];
        for(int i=1;i<arr.size();i++){
            res=common(res,arr[i]);
        }
        return res;
    }
};