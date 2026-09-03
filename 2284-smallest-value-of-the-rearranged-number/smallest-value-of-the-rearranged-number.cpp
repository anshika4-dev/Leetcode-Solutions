class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        string s=to_string(num);
        if(num<0){
            sort(s.rbegin(),s.rend());
            return stoll(s)*-1;
        }
        sort(s.begin(),s.end());
        int i=0;
        while(s[i]=='0') i++;
        swap(s[0],s[i]);
        return stoll(s);
    }
};