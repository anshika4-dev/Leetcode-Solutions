class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0,i=0,n=chars.size();
        while(i<n){
            char current=chars[i];
            int count=0;
            while(i<n && chars[i]==current){
                i++,count++;
            }
            chars[index++]=current;
            if(count>1){
                string num=to_string(count);
                for(char c:num) chars[index++]=c;
            }
        }
        return index;
    }
};