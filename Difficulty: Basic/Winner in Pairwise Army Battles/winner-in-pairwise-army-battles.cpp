class Solution {
  public:
    string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
        int i=0;
        int j=0;
        int acount=0;
        int bcount=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]==arr2[j]){
                i++;
                j++;
            }
            else if(arr1[i]<arr2[j]){
                bcount++;
                i++;j++;
            }
            else{
                acount++;
                i++;j++;
            }
        }
        if(acount>bcount) return "A";
        else if(acount<bcount) return "B";
        return "DRAW";
    }
};