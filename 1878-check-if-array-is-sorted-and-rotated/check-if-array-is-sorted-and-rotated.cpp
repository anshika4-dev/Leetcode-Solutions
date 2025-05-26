class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int k,count=0;
        vector<int>result;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                k=i+1;
                count=1;
                break;
            }
        }
        if(count==0)return true;
        for(int i=k;i<n;i++){
            result.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            result.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        return result==nums;
    }
};