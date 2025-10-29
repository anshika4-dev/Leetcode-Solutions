class Solution {
public:
    int smallestNumber(int n) {
        int result=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            if(pow(2,i)>n){
                result=i;
                break;
            } 
        }
        return pow(2,result)-1;
    }
};