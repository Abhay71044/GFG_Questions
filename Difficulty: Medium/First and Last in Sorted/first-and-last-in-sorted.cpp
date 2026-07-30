class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int>ans(2,-1);
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x){
                ans[0]=i;
                break;
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==x){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};