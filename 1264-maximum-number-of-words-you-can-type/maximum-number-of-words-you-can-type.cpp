class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>st(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        string word="";
        vector<string>result;
        int count=0;
        while(ss>>word) result.push_back(word);
        for(auto x:result){
            bool ok=true;
            for(char a:x) if(st.find(a)!=st.end()){
                ok=false;
                break;
            }
            if(ok) count++;
        }
        return count;
    }
};