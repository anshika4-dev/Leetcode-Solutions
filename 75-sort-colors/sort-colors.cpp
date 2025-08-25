class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return;
        int minVal=*min_element(nums.begin(),nums.end());
        int maxVal=*max_element(nums.begin(),nums.end());
        int range=maxVal-minVal+1;
        vector<int>count(range,0);
        for(int x:nums) count[x-minVal]++;
        for(int i=1;i<range;i++) count[i]+=count[i-1];
        vector<int>output(n);
        for(int i=n-1;i>=0;i--){
            output[count[nums[i]-minVal]-1]=nums[i];
            count[nums[i]-minVal]--;
        }
        nums=output;
    }
};