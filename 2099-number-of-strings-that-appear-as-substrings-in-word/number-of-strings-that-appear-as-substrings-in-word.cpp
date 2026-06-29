class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(auto x:patterns){
            if(word.find(x)!=std::string::npos) count++;
        }
        return count;
    }
};