class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a=i;
            int b=n-i;
            if((to_string(a)+to_string(b)).find('0')==string::npos){
                return {a,b};
            }
        }
        return {-1,-1};
    }
};