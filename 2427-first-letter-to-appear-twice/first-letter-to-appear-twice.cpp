class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
            if(m[x]==2) return x;
        }
        return '\0';
    }
};