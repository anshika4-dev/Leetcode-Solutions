class TextEditor {
private:
    string left, right;

public:
    TextEditor() {}
    
    void addText(string text) {
        left += text;
    }
    
    int deleteText(int k) {
        int len = left.length();
        int tmp = len - k;
        left.erase(max(0, tmp));

        return min(len, k);
    }
    
    string cursorLeft(int k) {
        int tmp = left.length() - k;
        int leftIdx = max(0, tmp);
        right = left.substr(leftIdx) + right;
        left.erase(leftIdx);

        int tmp1 = left.length() - 10;
        string str = left.substr(max(0, tmp1));
        return str;
    }
    
    string cursorRight(int k) {
        int tmp = right.length();
        int rightIdx = min(k, tmp);
        left = left + right.substr(0, rightIdx);
        right.erase(0, rightIdx);

        int tmp1 = left.length() - 10;
        string str = left.substr(max(0, tmp1));
        return str;
    }
};