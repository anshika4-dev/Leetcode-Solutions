class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int>m;
        int count_a=0,count_b=0;
        for(char x:s) m[x]++;
        for(auto x:m){
            if(x.first=='a') count_a=x.second;
            else count_b=x.second;
        }
        return abs(count_a-count_b);
    }
};