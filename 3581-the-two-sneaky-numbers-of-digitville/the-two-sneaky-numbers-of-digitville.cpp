class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>result;
        for(int x:nums) m[x]++;
        vector<pair<int, int>> freqVec(m.begin(), m.end());

        sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second>b.second;
        });
        int i=0;
        for(auto &p:freqVec){
            if(i==2) break;
            else result.push_back(p.first);
            i++;
        }
        return result;

    }
};