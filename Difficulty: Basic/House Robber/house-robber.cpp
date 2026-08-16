class Solution {
  public:
    int maximizeMoney(int n, int k) {
        if(n%2 ==0) return (n/2)*k;
        else return ((n/2)+1)*k;
    }
};