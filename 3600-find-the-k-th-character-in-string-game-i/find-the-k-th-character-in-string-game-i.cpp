class Solution {
public:
    char kthCharacter(int k) {
        string temp="a",t2;
        while(temp.length()<k){
            t2=temp;
            for(int i=0;i<t2.length();i++) t2[i]='a'+(t2[i]-'a'+1)%26;
            temp+=t2;
        }
        return temp[k-1];
    }
};