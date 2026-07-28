class Solution {
  public:
    int sumSqEven(int n) {
        int sum=0;
        int i=2;
        while(n--){
            sum+=pow(i,2);
            i+=2;
        }
        return sum;
    }
};