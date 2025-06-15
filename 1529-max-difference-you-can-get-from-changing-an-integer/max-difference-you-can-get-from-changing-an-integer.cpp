class Solution {
public:
    int maxDiff(int num) {
        string first=to_string(num);
        int index=0;
        while(index<first.length() && first[index]=='9') index++;
        if(index!=first.length()){
            char to_be_replaced=first[index];
            while(index<first.length()){
                if(first[index]==to_be_replaced) first[index]='9';
                index++;
            }
        }
        string second=to_string(num);
        index=0;
        while(index<second.length() && (second[index]=='1' || second[index]=='0')) index++;
        if(index!=second.length()){
            char to_be_replaced=second[index];
            char replace_with=index==0?'1':'0';
            while(index<second.length()){
                if(second[index]==to_be_replaced) second[index]=replace_with;
                index++;
            }
        }
        return stoi(first)-stoi(second);
    }
};