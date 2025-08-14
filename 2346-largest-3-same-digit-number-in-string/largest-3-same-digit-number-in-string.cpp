class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.length()<3) return "";
        string result="";
        for(int i=0;i<num.length()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string candi=num.substr(i,3);
                result=max(result,candi);
            }
        }
        return result;
    }
};