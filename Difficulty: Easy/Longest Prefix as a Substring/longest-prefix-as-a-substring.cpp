class Solution {
  public:
    int longestCommonPrefix(string str1, string str2) {
        int n=str1.length();
        int v=0;
        for(int i=1;i<=n;i++){
            string a=str1.substr(0,i);
            if(str2.find(a) != string::npos){
                v=i;
            }
        }
        return v;
    }
};