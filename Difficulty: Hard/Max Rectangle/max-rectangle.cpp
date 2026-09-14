class Solution {
  public:
  
    vector<int> nextSmaller(vector<int>&arr){
        vector<int>ans(arr.size());
        stack<int>st;
        st.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            int curr=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int> prevsmaller(vector<int> &arr){
        vector<int>ans(arr.size());
        stack<int>st;
        st.push(-1);
        for(int i=0;i<arr.size();i++){
            int curr=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    
    int MaximumAreaHistogram(vector<int>heights){
        vector<int>next=nextSmaller(heights);
        vector<int>prev=prevsmaller(heights);
        int size=heights.size();
        int maxarea=INT_MIN;
        for(int i=0;i<size;i++){
            int len=heights[i];
            if(next[i] == -1){
                next[i]=size;
            }
            int wid=next[i]-prev[i]-1;
            int area=len*wid;
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
  
    int maxArea(vector<vector<int>> &mat) {
        int area=MaximumAreaHistogram(mat[0]);
        for(int i=1;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    mat[i][j]+=mat[i-1][j];
                }
                else{
                    mat[i][j]=0;
                }
            }
            area=max(area,MaximumAreaHistogram(mat[i]));
        }
        return area;
    }
};