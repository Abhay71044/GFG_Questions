class Solution {
  public:
  
    int partition(vector<int>& arr, int s, int e) {
        int pivotindex=s;
        int pivotelement=arr[s];
        
        int count=0;
        for(int i=s;i<=e;i++){
            if(arr[i]<=pivotelement){
                count++;
            }
        }
        int rightindex=s+count-1;
        swap(arr[pivotindex],arr[rightindex]);
        pivotindex=rightindex;
        
        int i=s;
        int j=e;
        while(i<pivotindex && j>pivotindex){
            while(arr[i]<=pivotelement){
                i++;
            }
            while(arr[j]>pivotelement){
                j--;
            }
            if(i<pivotindex && j>pivotindex){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        return pivotindex;
        
    }
    
    void quickSort(vector<int>& arr, int low, int high) {
        if(low>=high) return;
        
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
};