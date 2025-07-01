class Solution {
public:
    int possibleStringCount(string word) {
        int len=0;
        for(int i=0;i<word.length();i++){
            char temp=word[i];
            i++;
            while(i<word.length() && temp==word[i]) i++,len++;
            i--;
        }
        return len+1;
    }
};