class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>m;
        while(n>0){
            m[n%10]++;
            n/=10;
        }
        int freq=INT_MAX,num=INT_MAX;
        for(auto x:m) {
            if(x.second<freq){
                freq=x.second;
                num=x.first;
            }else if(x.second==freq){
                num=min(num,x.first);
            }
        }
        return num;
    }
};