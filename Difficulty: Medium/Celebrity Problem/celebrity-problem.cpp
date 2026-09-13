class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        stack<int>st;
        for(int i=0;i<mat[0].size();i++){
            st.push(i);
        }
        while(st.size()!=1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(mat[a][b]){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int a=st.top();
        st.pop();
        for(int i=0;i<mat.size();i++){
            if(a!=i){
                if(mat[a][i] != 0){
                    return -1;
                }
                if(mat[i][a] != 1){
                    return -1;
                }
            }
        }
        return a;
    }
};