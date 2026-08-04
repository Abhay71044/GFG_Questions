class Solution {
  public:
  
    bool canwePlace(vector<int>arr,int mid, int k){
        int c=1;
        int pos=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]-pos>=mid){
                c++;
                pos=arr[i];
            }
            if(c == k) return true;
        }
        return false;
    }
  
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr[arr.size()-1]-arr[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canwePlace(arr,mid,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans; 
    }
};