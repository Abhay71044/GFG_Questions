class Solution {
public:
    long long check(int mid, int n, int m) {
        long long ans = 1;
        for (int i = 0; i < n; i++) {
            ans *= mid;
            if (ans > m)
                return ans;
        }

        return ans;
    }

    int nthRoot(int n, int m) {
        if(m==0) return 0;
        int low = 1, high = m;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long val = check(mid, n, m);
            if (val == m)
                return mid;
            else if (val < m)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};