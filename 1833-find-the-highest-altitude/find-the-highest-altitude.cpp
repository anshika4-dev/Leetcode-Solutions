class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cumsum=0,res=0;
        for(int x:gain){
            cumsum+=x;
            res=max(cumsum,res);
        }
        return res;
    }
};