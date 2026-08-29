class Solution {
  public:
    int subsetXORSum(vector<int>& arr) {
        int xr = 0;

        for(int x : arr) {
            xr |= x;
        }

        return xr * (1 << (arr.size() - 1));
    }
};