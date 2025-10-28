class Solution {
public:
    long long removeZeros(long long n) {
        long long temp=0;
        while(n!=0){
            int d=n%10;
            if(d!=0) temp=temp*10+d;
            n=n/10;
        }
        long long result=0;
        while(temp!=0){
            int d=temp%10;
            result=result*10+d;
            temp/=10;
        }
        return result;
    }
};