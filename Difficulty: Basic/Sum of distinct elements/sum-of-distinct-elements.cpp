class Solution {
  public:
    int findSum(vector<int>& arr) {
        set<int>st;
        for(int val:arr){
            st.insert(val);
        }
        long long sum=0;
        for(auto val:st){
            sum+=val;
        }
        return sum;
    }
};