class Solution {
public:
    string makeFancyString(string s) {
        string result=s.substr(0,2);
        for(int i=2;i<s.length();i++){
            if(s[i]==s[i-1] && s[i]==s[i-2]) continue;
            else result+=s[i];
        }
        return result;
    }
};