class Solution {
public:
    int smallestNumber(int n) {
        while(1){
            if((n&(n+1))==0) return n;
            n++;
        }
    }
};