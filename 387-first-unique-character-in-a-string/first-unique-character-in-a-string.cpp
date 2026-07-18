class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        int i=0;
        for(char x:s){
            if(m[x]==1) return i;
            i++;
        }
        return -1;
    }
};