class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>result;
        if(n%2!=0){
            result.push_back(0);
            n--;
        }
        int x=4;
        while(n){
            n-=2;
            result.push_back(x);
            result.push_back(x*-1);
            x++;
        }
        return result;
    }
};