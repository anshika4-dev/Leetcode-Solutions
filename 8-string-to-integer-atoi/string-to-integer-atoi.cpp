class Solution {
public:
    int myAtoi(string s) {
        string result="";
        int i=0;
        while(i<s.length() && s[i]==' ') i++;
        bool n=false;
        if(i<s.length() && s[i]=='-'){
            n=true;
            i++;
        }
        else if(i<s.length() && s[i]=='+') i++;
        while(i<s.length()){
            if((s[i]-'0')>=0 && (s[i]-'0')<=9) result+=s[i++];
            else break;
        }
        if(result.empty()) return 0;
        long long res;
        try {
            res = stoll(result);
        } catch (...) {
            return n ? INT_MIN : INT_MAX;
        }
        if(n) res=-res;
        if(res<INT_MIN) return INT_MIN;
        if(res>INT_MAX) return INT_MAX;
        return (int)res;
    }
};