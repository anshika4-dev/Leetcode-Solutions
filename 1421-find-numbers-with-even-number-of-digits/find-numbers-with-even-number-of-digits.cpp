class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int x:nums){
            if(((int)log10(x)+1)%2==0) count++;
        }
        return count;
    }
};