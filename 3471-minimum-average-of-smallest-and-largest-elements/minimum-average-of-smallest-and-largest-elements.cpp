class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            double x=(nums[i]+nums[n-1-i])/2.00;
            result.push_back(x);
        }
        sort(result.begin(),result.end());
        return result[0];
    }
};