class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result="";
        vector<string>v;
        string word="";
        while(ss>>word) v.push_back(word);
        reverse(v.begin(),v.end());
        for(string x:v){
            result+=x;
            result+=" ";
        }
        result.pop_back();
        return result;
    }
};