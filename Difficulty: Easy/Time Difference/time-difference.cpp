class Solution {
  public:
    string timeGap(string &st, string &et) {
        int h1=stoi(st.substr(0,2));
        int m1=stoi(st.substr(3,2));
        int s1=stoi(st.substr(6,2));
        int h2=stoi(et.substr(0,2));
        int m2=stoi(et.substr(3,2));
        int s2=stoi(et.substr(6,2));
        
        int t1=h1*3600+m1*60+s1;
        int t2=h2*3600+m2*60+s2;
        
        int ans=t2-t1;
        
        int h=ans/3600;
        ans=ans%3600;
        
        int m=ans/60;
        int s=ans%60;
        
        stringstream ss;
        ss << setfill('0') << setw(2) << h << ":"
           << setw(2) << m << ":"
           << setw(2) << s;

        return ss.str();
    }
};