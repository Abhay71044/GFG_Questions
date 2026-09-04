class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n=arr.size();
        for(int i=0;i<n;i=i+k){
            int l=i;
            int e=min(i+k-1,n-1);
            reverse(arr.begin()+l,arr.begin()+e+1);
        }
    }
};
