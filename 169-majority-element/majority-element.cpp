class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=0,freq=0;
        for(int x:nums){
            if(x==temp) freq++;
            else freq--;
            if(freq<=0){
                freq=1;
                temp=x;
            }
        }
        return temp;
    }
};