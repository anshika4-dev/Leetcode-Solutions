class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0,count=0,result=0;
        string vowel="aeiou";
        for(int right=0;right<ssize(s);right++){
            if(vowel.find(s[right])!=string::npos) count++;
            if(right-left+1==k){
                result=max(result,count);
                if(vowel.find(s[left])!=string::npos) count--;
                left++;
            }
        }
        return result;
    }
};