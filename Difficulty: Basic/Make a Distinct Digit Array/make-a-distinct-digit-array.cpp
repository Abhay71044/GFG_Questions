class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        set<int>st;
        for(auto n:arr){
            while(n){
                st.insert(n%10);
                n=n/10;
            }
        }
        vector<int>ans;
        for(auto val:st){
            ans.push_back(val);
        }
        return ans;
    }
};