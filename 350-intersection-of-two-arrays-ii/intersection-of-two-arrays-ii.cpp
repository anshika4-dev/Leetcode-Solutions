class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int x:nums1) m[x]++;
        vector<int>result;
        for(int x:nums2){
            if(m[x]>0){
                result.push_back(x);
                m[x]--;
            }
        }
        return result;
    }
};