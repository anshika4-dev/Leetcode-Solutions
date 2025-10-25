class Solution {
public:
    int totalMoney(int n) {
        int result=0,day=7,i=1,j=1;
        while(n--){
            if(day==0){
                day=7;
                j=i+1;
                i++;
            }
            result+=j;
            j++;
            day--;
        }
        return result;
    }
};