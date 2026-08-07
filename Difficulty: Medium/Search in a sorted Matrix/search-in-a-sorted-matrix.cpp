class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int x) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n * m - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int val = matrix[mid / m][mid % m];
            if(val == x)
                return true;
            if(val < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};