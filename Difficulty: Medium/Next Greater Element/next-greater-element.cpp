class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> st;
        vector<int> ans(arr.size(), -1);
        for(int i = 0; i < arr.size(); i++) {
            while(!st.empty() && arr[i] > arr[st.top()]) {
                int kids = st.top();
                st.pop();
                ans[kids] = arr[i];
            }
            st.push(i);
        }
        return ans;
    }
};