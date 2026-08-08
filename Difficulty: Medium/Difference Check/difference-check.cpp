class Solution {
  public:
    int minDifference(vector<string> &arr) {
        vector<int>seconds;
        for(int i=0;i<arr.size();i++){
            string curr=arr[i];
            int hour=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int sec=stoi(curr.substr(6,2));
            int totalsec=hour*60*60+min*60+sec;
            seconds.push_back(totalsec);
        }
        sort(seconds.begin(),seconds.end());
        int mini=INT_MAX;
        for(int i=0;i<seconds.size()-1;i++){
            int diff=seconds[i+1]-seconds[i];
            mini=min(mini,diff);
        }
        int lastdiff=seconds[0]+86400-seconds[seconds.size()-1];
        mini=min(mini,lastdiff);
        return mini;
    }
};
