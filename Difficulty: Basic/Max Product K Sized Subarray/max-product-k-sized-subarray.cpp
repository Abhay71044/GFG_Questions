class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int max=1;
        for(int i=0;i<k;i++)
        {

            max*=arr[i];
        }
        int prod=max;
        for(int i=k;i<n;i++)
        {
           prod=(prod*arr[i])/arr[i-k];
           if(prod>max)
           {
               max=prod;
           }
        }
        return max;
    }
};