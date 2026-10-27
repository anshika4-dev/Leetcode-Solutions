class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> s;
        string temp="";
        for(int i=0;i<n;i++) temp+="#";
        for(int i=0;i<m;i++) s.push_back(temp);
        for(int i=0;i<m;i++) s[i][0]='.';
        for(int i=0;i<n;i++) s[m-1][i]='.';
        return s;
    }
};