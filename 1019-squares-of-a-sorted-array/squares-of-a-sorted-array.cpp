class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0,right=nums.size()-1,k=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])) ans[k--]=nums[left]*nums[left++];
            else ans[k--]=nums[right]*nums[right--];
        }
        return ans;
    }
};