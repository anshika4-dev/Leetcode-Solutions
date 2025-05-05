class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word="";
        for(char c:s){
            if(c!=' ') word+=c;
            else if(!word.empty()){
                words.push_back(word);
                word="";
            }
        }
        if (!word.empty()) words.push_back(word);  // Add last word if any

        // Reverse the vector of words
        reverse(words.begin(), words.end());

        // Join the words with single space
        string result = "";
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i != words.size() - 1) result += " ";
        }

        return result;
    }
};