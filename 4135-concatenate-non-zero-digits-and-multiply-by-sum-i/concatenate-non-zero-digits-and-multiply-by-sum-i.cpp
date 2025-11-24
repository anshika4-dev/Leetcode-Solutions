class Solution {
public:
    long long sumAndMultiply(int n) {
        long long count=0,rem=0,sum=0;
        while(n){
            if(n%10>0) count=count*10+(n%10);
            n/=10;
        }
        while(count){
            sum+=count%10;
            rem=rem*10+(count%10);
            count/=10;
        }
        return sum*rem;
    }
};