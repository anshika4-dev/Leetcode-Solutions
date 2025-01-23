class Solution {
public:
    bool isFascinating(int n) {
        int temp=n;
        string x=to_string(n);
        temp=n*2;
        x+=to_string(temp);
        temp=n*3;
        x+=to_string(temp);
        if(x.length()>9) return false;
        unordered_set<int>s;
        for(char c:x){
            s.insert(c-'0');
        }
        if(s.size()==9 && !s.count(0))  return true;
        return false;
    }
};