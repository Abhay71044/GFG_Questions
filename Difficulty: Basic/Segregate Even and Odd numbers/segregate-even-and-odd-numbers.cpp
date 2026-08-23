class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int even=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                int temp = arr[even];
                arr[even] = arr[i];
                arr[i] = temp;
                even++;
            }
        }
        sort(arr.begin()+even,arr.end());
    }
};