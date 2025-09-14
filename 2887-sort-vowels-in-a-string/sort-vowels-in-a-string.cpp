class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;
        string v="aeiouAEIOU";
        for(char x:s) if(v.find(x)!=string::npos) vowels.push_back(x);
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(v.find(s[i])!=string::npos){
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
    }
};