class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        s=s+s;
        for(int i=0;i<goal.length();i++){
            if(s.substr(i,goal.length())==goal) return true;
        }
        return false;
    }
};