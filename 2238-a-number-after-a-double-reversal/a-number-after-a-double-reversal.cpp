class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        string s=to_string(num);
        if(s.back()=='0') return false;
        return true;
    }
};