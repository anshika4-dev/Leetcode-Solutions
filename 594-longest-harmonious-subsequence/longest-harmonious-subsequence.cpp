class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0,num1=-758485439,len1=0,len2=0;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            while(i<nums.size() && curr==nums[i]){
                i++;
                len2++;
            }
           if(curr-num1==1) res=max(res,len1+len2);
           num1=curr;
           len1=len2;
           len2=0;
           i--;
        }
        return res;
    }
};