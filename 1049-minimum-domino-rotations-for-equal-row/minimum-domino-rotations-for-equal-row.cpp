class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int a=0,b=0,f1=0,f2=0;
        for(int x:tops) m1[x]++;
        for(int x:bottoms) m2[x]++;
        for(auto &x:m1){
            if(f1<x.second){
                f1=x.second;
                a=x.first;
            }
        }
        for(auto &x:m2){
            if(f2<x.second){
                f2=x.second;
                b=x.first;
            }
        }
        a=m1[a]+m2[a]>m1[b]+m2[b]?a:b;
        for(int i=0;i<tops.size();i++)
            if(tops[i]!=a && bottoms[i]!=a) return -1;
        return min(tops.size()-m1[a],tops.size()-m2[a]);
    }
};