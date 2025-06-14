class Solution {
public:
    int minMaxDifference(int num) {
        if(num<=9) return 9;
        string temp=to_string(num);
        char to_be_replaced=temp[0];
        int index=0;
        while(index<temp.length() && temp[index]=='9') index++;
        if(index!=temp.length()){ 
        to_be_replaced=temp[index];
        for(char &x:temp) if(x==to_be_replaced) x='9';
        }
        string temp2=to_string(num);
        char to_be_replaced2=temp2[0];
        for(char &x:temp2) if(x==to_be_replaced2) x='0';
        return stoi(temp)-stoi(temp2);
    }
};