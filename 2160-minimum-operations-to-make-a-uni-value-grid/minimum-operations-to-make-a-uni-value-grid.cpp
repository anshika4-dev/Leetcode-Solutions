class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int k) {
        vector<int>temp;
        for(auto x:grid) for(int a:x) temp.push_back(a);
        sort(temp.begin(),temp.end());
        int median=temp[temp.size()/2],count=0;
        for(int i=0;i<temp.size();i++){
            if(abs(temp[i]-median)%k!=0) return -1;
            count+=(abs(temp[i]-median)/k);
        }
        return count;
    }
};