class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<pair<int,int>>st;
        vector<int>ans(arr.size());
        st.push({arr[0],1});
        ans[0]=1;
        for(int i=1;i<arr.size();i++){
            int span=0;
            while(!st.empty() && st.top().first<=arr[i]){
                span+=st.top().second;
                st.pop();
            }
            span++;
            st.push({arr[i],span});
            ans[i]=span;
        }
        return ans;
    }
};