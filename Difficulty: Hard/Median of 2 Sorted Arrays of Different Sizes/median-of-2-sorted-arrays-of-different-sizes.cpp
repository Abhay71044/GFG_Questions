class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int ele=a.size()+b.size();
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        if(ele%2 != 0){
            return a[a.size()/2];
        }
        return (a[a.size()/2] + a[(a.size()/2)-1]) / 2.0;
    }
};