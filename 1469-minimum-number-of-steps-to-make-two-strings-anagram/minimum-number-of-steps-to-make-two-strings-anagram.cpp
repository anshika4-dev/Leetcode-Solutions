class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        for(char x:t) m[x]--;
        for(auto &x:m){
            count+=abs(x.second);
        }
        return count/2;
    }
};