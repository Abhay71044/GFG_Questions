class Solution {
  public:
  public:
  
    int fact(int n){
        if(n==0 || n==1) return 1;
        return n*fact(n-1);
    }
  
    bool isStrong(int n) {
        int ans=0;
        int temp=n;
        while(temp){
            ans=ans+fact(temp%10);
            temp=temp/10;
        }
        if(ans == n) return true;
        return false;
    }
};
