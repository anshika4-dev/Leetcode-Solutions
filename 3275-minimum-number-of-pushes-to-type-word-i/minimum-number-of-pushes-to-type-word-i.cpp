class Solution {
public:
    int minimumPushes(string word) {
        int result=0;
        unordered_map<char,int>m;
        for(char x:word) m[x]++;
        vector<pair<char,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        });
        for(int i=0;i<v.size();i++){ result+=(v[i].second*((i/8)+1));
        cout<<result<<" ";
        }
        return result;
    }
};