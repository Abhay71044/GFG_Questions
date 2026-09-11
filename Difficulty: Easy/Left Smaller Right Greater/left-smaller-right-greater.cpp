class Solution {
  public:
    int findElement(vector<int> &arr) {
        vector<int> left;
        int maxi = INT_MIN;
        for(int i = 0;i<arr.size();i++){
           maxi = max(maxi,arr[i]);
           left.push_back(maxi);
        }
        vector<int> right;
        int mini = INT_MAX;
        for(int i = arr.size()-1;i>=2;i--){
           mini = min(mini,arr[i]);
           right.push_back(mini);
        }
        reverse(right.begin(),right.end());
        int k = 0;
        for(int i = 1;i<arr.size()-1;i++){
           if(left[k] < arr[i] && right[k] > arr[i]){
                return arr[i];
           }
           k++;
        }
        return -1;
    }
};