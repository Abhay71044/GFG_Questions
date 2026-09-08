class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        int n = arr.size();
        long long maxSum = LLONG_MIN;
        int bestStart = -1, bestLen = -1;
        int i = 0;
        while (i < n) {
            if (arr[i] < 0) {
                i++;
                continue;
            }
            int start = i;
            long long sum = 0;
            while (i < n && arr[i] >= 0) {
                sum += arr[i];
                i++;
            }
            int len = i - start;

            if (sum > maxSum || (sum == maxSum && len > bestLen)) {
                maxSum = sum;
                bestStart = start;
                bestLen = len;
            }
        }

        if (bestStart == -1) return {-1};

        return vector<int>(arr.begin() + bestStart, arr.begin() + bestStart + bestLen);
    }
};