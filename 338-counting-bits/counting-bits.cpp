class Solution {
public:
    int bits(int i){
        int count=0;
        while(i>0){
            i&=(i-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++) res.push_back(bits(i));
        return res;
    }
};