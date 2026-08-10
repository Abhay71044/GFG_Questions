class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        int n=txt.size();
        int m=pat.size();
        for(int i=0;i<=n-m;i++){
            for(int j=0;j<m;j++){
                if(txt[i+j] != pat[j]){
                    break;
                }
                if(j==m-1){
                    return i;
                }
            }
        }
        return -1;
    }
};