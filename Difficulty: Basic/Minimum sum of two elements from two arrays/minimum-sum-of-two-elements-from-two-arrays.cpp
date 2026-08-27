class Solution {
public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int min1 = INT_MAX, second1 = INT_MAX;
        int idx1 = -1;
        int min2 = INT_MAX, second2 = INT_MAX;
        int idx2 = -1;
        for (int i = 0; i < n; i++) {
            if (arr1[i] < min1) {
                second1 = min1;
                min1 = arr1[i];
                idx1 = i;
            }
            else if (arr1[i] < second1) {
                second1 = arr1[i];
            }
        }
        for (int i = 0; i < n; i++) {

            if (arr2[i] < min2) {
                second2 = min2;
                min2 = arr2[i];
                idx2 = i;
            }
            else if (arr2[i] < second2) {
                second2 = arr2[i];
            }
        }
        if (idx1 != idx2) {
            return min1 + min2;
        }
        return min(min1 + second2, second1 + min2);
    }
};