class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int arr[256]={0};
        for(int i=0;i<s1.length();i++){
            arr[s1[i]]++;
        }
        for(int j=0;j<s2.length();j++){
            arr[s2[j]]--;
        }
        for(int i=0;i<256;i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};