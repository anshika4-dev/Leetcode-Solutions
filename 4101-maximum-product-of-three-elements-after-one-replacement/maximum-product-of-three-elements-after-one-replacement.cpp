class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&] (auto &a,auto &b){
            return abs(a)<abs(b);
        });
        long long product=(long long)nums[nums.size()-1]*nums[nums.size()-2];
        return product>0?product*100000:product*-100000;
    }
};