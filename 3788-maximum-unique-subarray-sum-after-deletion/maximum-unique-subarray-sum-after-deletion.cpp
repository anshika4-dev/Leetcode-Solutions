class Solution {
public:
    int maxSum(vector<int>& nums) {
        int curr_sum=0;
        vector<bool>v(101,false);
        for(int x:nums){
            if(x>0 && v[x]==false){
                curr_sum+=x;
                v[x]=true;
            }
        }
        return curr_sum==0?*max_element(nums.begin(),nums.end()):curr_sum;
    }
};