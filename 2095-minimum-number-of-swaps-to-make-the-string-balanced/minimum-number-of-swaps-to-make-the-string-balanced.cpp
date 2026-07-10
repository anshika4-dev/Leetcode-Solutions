class Solution {
public:
    int minSwaps(string s) {
        int swap=0,balanced=0;
        for(char x:s){
            if(x=='[') balanced++;
            else{
                if(balanced==0) swap++;
                else balanced--;
            }
        }
        return (swap+1)/2;
    }
};