class Solution {
  public:
  
    void solve(vector<int> &arr,vector<string>&ans,string&output,vector<string>&mapping,int idx){
        if(idx>=arr.size()){
            ans.push_back(output);
            return;
        }
        int digit=arr[idx];
        if(digit == 0 || digit == 1) {
            solve(arr, ans, output, mapping, idx + 1);
            return;
        }
        string val=mapping[digit];
        for(int i=0;i<val.size();i++){
            char ch=val[i];
            output.push_back(ch);
            solve(arr,ans,output,mapping,idx+1);
            output.pop_back();
        }
    }
  
    vector<string> possibleWords(vector<int> &arr) {
        vector<string>ans;
        string output="";
        vector<string>mapping(10);
        mapping[1]="";
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";
        solve(arr,ans,output,mapping,0);
        return ans;
    }
};