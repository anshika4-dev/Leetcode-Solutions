class Solution {
public:
    string digitSum(string s, int k) {
        string res="";
        while(s.size()>k){
            for(int i=0;i<s.size();i+=k){
                int n=0;
                for(int j=i;j<i+k && j<s.size();j++) n+=(s[j]-'0');
                res+=to_string(n);
            }
            s=res;
            res="";
        }
        return s;
    }
};