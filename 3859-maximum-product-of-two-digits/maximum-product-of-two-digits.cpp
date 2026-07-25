class Solution {
public:
    int maxProduct(int n) {
        string temp=to_string(n);
        sort(temp.rbegin(),temp.rend());
        return (temp[0]-'0')*(temp[1]-'0');
    }
};