class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&](auto &a,auto &b){
            return abs(a)<abs(b);
        });
        long long result=0;
        for(long long i=nums.size()-1;i>=0;i--){
            if(i<nums.size()/2) result-=(nums[i]*nums[i]);
            else result+=(nums[i]*nums[i]);
        }
        return result;
    }
};