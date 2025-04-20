class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int count=0;
        unordered_map<int,int>m;
        for(int x:answers) m[x]++;
        for(auto x:m){
            int groupSize = x.first + 1;
            int groups = (x.second + groupSize - 1) / groupSize; 
            count += groups * groupSize;
        }
        return count;
        
    }
};