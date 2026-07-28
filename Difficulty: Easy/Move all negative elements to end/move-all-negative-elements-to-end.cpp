class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>pos,neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        for(int i=0;i<pos.size();i++){
            arr[i]=pos[i];
        }
        for(int i=pos.size();i<pos.size()+neg.size();i++){
            arr[i]=neg[i-pos.size()];
        }
    }
};