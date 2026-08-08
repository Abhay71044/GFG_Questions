class Solution {
  public:
  
    int countstudents(vector<int>&arr,int pages){
        int student=1;
        long long pagecount=0;
        for(int i=0;i<arr.size();i++){
            if(pagecount+arr[i]>pages){
                student++;
                pagecount=arr[i];
            }
            else{
                pagecount+=arr[i];
            }
        }
        return student;
    }
    
  
    int splitArray(vector<int>& arr, int k) {
        if(arr.size()<k) return -1;
        int low=INT_MIN;
        int high=0;
        for(int i=0;i<arr.size();i++){
            low=max(low,arr[i]);
            high+=arr[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int students=countstudents(arr,mid);
            if(students<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};