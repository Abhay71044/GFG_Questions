class Solution {
  public:
  
    double solve(double x,long long n){
        if(n==0) return 1.0;
        double half=solve(x,n/2);
        if(n%2==0) return half*half;
        return x*half*half;
    }
  
    double power(double b, int e) {
        long long num=e;
        if(num<0){
            b=1/b;
            num=-num;
        }
        return solve(b,num);
    }
};