class Solution {
  public:
    bool isPrime(int n) {
        if(n==0 || n==1) return false;
        int count=0;
        for(int i=2;i<=n/2;i++){
            if(n%i == 0) count++;
        }
        if(count) return false;
        return true;
    }
};
