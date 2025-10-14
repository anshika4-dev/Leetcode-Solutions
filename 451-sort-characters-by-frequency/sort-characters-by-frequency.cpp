class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char x:s) m[x]++;
        vector<pair<char, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(),[](auto &a, auto &b) {
            return a.second > b.second;  
        });
        string result="";
        for(auto x:vec){
            result.insert(result.end(),x.second,x.first);
        }
        return result;
    }
};