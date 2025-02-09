class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        long long count=0;
        for(int i=0;i<n;i++){
            if(m.count(nums[i]-i)) count+=m[nums[i]-i];
            m[nums[i]-i]++;
        }
        return (long long)n*(n-1)/2-count;
    }
};