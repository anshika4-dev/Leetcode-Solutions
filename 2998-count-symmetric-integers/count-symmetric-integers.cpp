class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string x=to_string(i);
            int n=x.length();
                        int sum1=0,sum2=0;

            if(n%2!=0) continue;
            else{
                for(int j=0;j<n/2;j++){
                    sum1+=x[j] -'0';
                }
                for(int j=n/2;j<n;j++){
                    sum2+=x[j] -'0';
                }
                if(sum1==sum2) count++;
            }
        }
        return count;
    }
};