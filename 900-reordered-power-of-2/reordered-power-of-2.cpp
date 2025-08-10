class Solution {
public:
    string sorted(int num){
        string temp=to_string(num);
        sort(temp.begin(),temp.end());
        return temp;
    }
    bool reorderedPowerOf2(int n) {
        string original=sorted(n);
        for(int i=0;i<31;i++){
            int j=1<<i;
            string t=sorted(j);
            if(original==t) return true;
        }
        return false;
    }
};