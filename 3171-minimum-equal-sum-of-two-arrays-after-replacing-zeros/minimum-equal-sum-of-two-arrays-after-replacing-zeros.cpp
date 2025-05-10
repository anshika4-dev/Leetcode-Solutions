class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0,zero1=0,zero2=0;
        for(int x:nums1){
            sum1+=x;
            if(x==0){
                sum1++;
                zero1++;
            }
        }
         for(int x:nums2){
            sum2+=x;
            if(x==0){
                sum2++;
                zero2++;
            }
        }
        if(sum1>sum2 && zero2==0) return -1;
        if(sum2>sum1 && zero1==0) return -1;
        return max(sum1,sum2);
    }
};