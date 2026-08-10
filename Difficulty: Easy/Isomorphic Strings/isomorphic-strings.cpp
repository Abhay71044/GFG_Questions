class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        int hash[256]={0};
        int istcharmapped[256]={0};
        for(int i=0;i<s1.size();i++){
            if(hash[s1[i]] == 0 && istcharmapped[s2[i]] == 0){
                hash[s1[i]]=s2[i];
                istcharmapped[s2[i]]=true;
            }
        }
        for(int i=0;i<s1.size();i++){
            if(char(hash[s1[i]] != s2[i])){
                return false;
            }
        }
        return true;
    }
};