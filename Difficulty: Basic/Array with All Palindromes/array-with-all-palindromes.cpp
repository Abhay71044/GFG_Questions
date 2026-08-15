class Solution {
  public:
  
    int ispalindrome(int n){
        int sum=0;
        int temp=n;
        while(temp>0){
            sum=sum*10+temp%10;
            temp=temp/10;
        }
        if(sum == n) return true;
        return false;
    }
  
    bool isPalinArray(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            if(!ispalindrome(arr[i])){
                return false;
            }
        }
        return true;
    }
};