class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int missing=-1;
        int repeating =-1;
        vector<int>a(arr.size()+1,0);
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i=1;i<=arr.size();i++){
            if(a[i]==2) repeating=i;
            else if(a[i]==0) missing=i;
        }
        return {repeating,missing};
    }
};