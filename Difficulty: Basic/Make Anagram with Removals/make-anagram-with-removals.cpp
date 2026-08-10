class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        int arr[256]={0};
        for(int i=0;i<s1.length();i++){
            arr[s1[i]]++;
        }
        for(int j=0;j<s2.length();j++){
            arr[s2[j]]--;
        }
        int count = 0;
        for(int i = 0; i < 256; i++) {
            count += abs(arr[i]);
        }
        return count;
    }
};
