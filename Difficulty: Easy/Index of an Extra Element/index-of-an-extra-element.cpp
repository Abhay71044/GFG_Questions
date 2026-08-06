class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]!=b[j]){
                return i;
            }
            i++;
            j++;
        }
        return a.size()-1;
    }
};