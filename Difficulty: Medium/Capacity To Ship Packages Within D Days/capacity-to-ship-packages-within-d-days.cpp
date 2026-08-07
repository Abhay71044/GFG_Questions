class Solution {
  public:
  
    int noOfDay(vector<int>&arr,int d){
        int count=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>d){
                count++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return count;
    }
  
    int leastWeightCapacity(vector<int>& arr, int D) {
        int low=INT_MIN;
        int high=0;
        for(int i=0;i<arr.size();i++){
            low=max(low,arr[i]);
            high=high+arr[i];
        }
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(noOfDay(arr,mid)<=D){
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