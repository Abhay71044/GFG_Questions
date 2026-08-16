class Solution {
public:
    int minProd(vector<int>& arr) {
        int negCount = 0;
        int zeroCount = 0;
        int product = 1;
        int maxNeg = INT_MIN;

        for (int x : arr) {
            if (x != 0) {
                product *= x;
            }
            if (x < 0) {
                negCount++;
                maxNeg = max(maxNeg, x);
            }
            else if (x == 0) {
                zeroCount++;
            }
        }
        if (negCount == 0) {
            if (zeroCount > 0) {
                return 0;
            }
            return *min_element(arr.begin(), arr.end());
        }
        if (negCount % 2 == 1) {
            return product;
        }
        return product / maxNeg;
    }
};