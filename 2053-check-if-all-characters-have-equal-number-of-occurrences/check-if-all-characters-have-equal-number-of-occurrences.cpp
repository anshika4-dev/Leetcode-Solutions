class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        int count=0;
        for(char x:s) m[x]++;
        int n=m.size();
        int t=s.length()/n;
        for(auto &x:m){
            if(x.second==t) count++;
        }
        return n==count?true:false;
    }
};