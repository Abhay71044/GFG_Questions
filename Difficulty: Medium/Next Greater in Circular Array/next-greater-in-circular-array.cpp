class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        vector<int>ans(arr.size());
        stack<int>st;
        st.push(-1);
        for(int i=2*arr.size()-1;i>=0;i--){
            int idx=i%arr.size();
            int curr=arr[idx];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(st.empty()){
                ans[idx]=-1;
            }
            else{
                ans[idx]=st.top();
            }
            st.push(curr);
        }
        return ans;
    }
};