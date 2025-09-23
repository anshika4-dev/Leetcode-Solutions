class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>v;
        while(ss>>word) v.push_back(word);
        reverse(v.begin(),v.end());
        string res="";
        for(string x:v){
            res+=x;
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};