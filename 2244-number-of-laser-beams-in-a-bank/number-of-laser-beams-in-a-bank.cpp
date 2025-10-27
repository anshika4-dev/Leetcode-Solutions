class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        int result=0;
        for(string s:bank){
            int count=0;
            for(char c:s){
                if(c=='1') count++;
            }
            if(count>0) v.push_back(count);
        }
        for(int i=1;i<v.size();i++){
            result+=(v[i-1]*v[i]);
        }
        return result;
    }
};