class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=0,freq=0;
        for(int x:nums){
            (temp==x)?freq++:freq--;
            if(freq<=0){
                temp=x;
                freq=1;
            }
        }
        return temp;
    }
};