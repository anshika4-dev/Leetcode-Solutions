class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>r1;
        vector<int>r2;
        vector<int>result;
        for(int x:nums){
            if(x>0) r1.push_back(x);
            else r2.push_back(x);
        }
        for(int i=0;i<r1.size();i++){
            result.push_back(r1[i]);
            result.push_back(r2[i]);
        }
        return result;
    }
};