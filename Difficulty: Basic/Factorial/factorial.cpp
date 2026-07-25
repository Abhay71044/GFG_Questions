class Solution {
  public:
    int factorial(int n) {
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*i;
        }
        return ans;
    }
};