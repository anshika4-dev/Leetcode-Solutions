class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&] (auto &a,auto &b){
            return abs(a)<abs(b);
        });
        const long long limit=100000;
        int n=nums.size();
        if(n<3) return 0;
        long long product=(long long)nums[n-1]*nums[n-2];
        if(product>0) product*=limit;
        else product*=-limit;
        return product;
    }
};