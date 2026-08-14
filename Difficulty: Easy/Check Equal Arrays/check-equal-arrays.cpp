class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size()!=b.size()) return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]!=b[j]) return false;
            i++;j++;
        }
        return true;
    }
};