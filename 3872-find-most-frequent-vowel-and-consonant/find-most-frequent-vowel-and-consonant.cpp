class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>v(26,0);
        int conso=0,vowel=0;
        for(char x:s){
            v[x-'a']++;
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') vowel=max(vowel,v[x-'a']);
            else conso=max(conso,v[x-'a']);
        }
        return vowel+conso;
    }
};