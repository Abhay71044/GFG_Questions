class Solution {
  public:
  
    int maxEle(vector<int>&arr){
        int maxi=-1;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
    
    int totalhrs(vector<int>&arr,int h){
        int totlhrs=0;
        for(int i=0;i<arr.size();i++){
            totlhrs+=ceil((double)arr[i] / (double)h);
        }
        return totlhrs;
    }
  
    int kokoEat(vector<int>& arr, int k) {
        int low=1;
        int high=maxEle(arr);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(totalhrs(arr,mid)<=k){
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