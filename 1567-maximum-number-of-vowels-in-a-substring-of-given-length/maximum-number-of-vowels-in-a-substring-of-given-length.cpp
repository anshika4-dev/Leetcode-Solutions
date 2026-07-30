class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,res=INT_MIN,left=0;
        for(int right=0;right<s.length();right++){
            if (s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u') count++;
            if(right-left+1==k){
                res=max(res,count);
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u') count--;
                left++;
            }
        }
        return res;
    }
};