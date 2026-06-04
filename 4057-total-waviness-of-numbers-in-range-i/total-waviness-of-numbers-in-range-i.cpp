class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
            string temp=to_string(i);
            for(int i=1;i<temp.size()-1;i++) if((temp[i]<temp[i+1] && temp[i]<temp[i-1]) || (temp[i]>temp[i+1] && temp[i]>temp[i-1])) count++;
        }
        return count;
    }
};