class Solution {
public:
    int maxOperations(string s) {
        int count=0,gap=0,prev=0,last=s.length()-1;
        while(last>=0 && s[last]=='1') last--;
        for(;last>=0;last--){
            if(s[last]=='1') count+=gap+1;
            else if(s[last]=='0' && prev==1) gap++;
            prev=s[last]=='1'?1:0; 
        }
        return count;
    }
};