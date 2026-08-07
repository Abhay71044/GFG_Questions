class Solution {
  public:
  
    bool possible(vector<int>&arr,int day,int k,int m){
        int count=0;
        int numbBookey=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                numbBookey+=(count/k);
                count=0;
            }
        }
        numbBookey+=(count/k);
        return numbBookey>=m;
    }
  
    int minDaysBloom(vector<int>& arr, int k, int m) {
        if(arr.size() < m*k) return -1;
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i=0;i<arr.size();i++){
            low=min(low,arr[i]);
            high=max(high,arr[i]);
        }
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(arr,mid,k,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};