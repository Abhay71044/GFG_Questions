class Solution {
  public:
    vector<int> printPalindromes(int m, int n) {
        vector<int>ans;
        for(int i=m;i<=n;i++){
            int temp=i;
            int sum=0;
            while(temp){
                sum=sum*10+temp%10;
                temp/=10;
            }
            if(sum == i){
                ans.push_back(i);
            }
        }
        return ans;
    }
};