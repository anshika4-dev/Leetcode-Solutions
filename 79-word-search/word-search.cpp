class Solution {
public:
    bool dfs(vector<vector<char>>& board, int m, int n, string &word,int i,int j, int k){
        if(k>=word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]=='*' || board[i][j]!=word[k]) return false;
        char temp=board[i][j];
        board[i][j]='*';
        bool a=dfs(board,m,n,word,i+1,j,k+1);
        bool b=dfs(board,m,n,word,i-1,j,k+1);
        bool c=dfs(board,m,n,word,i,j+1,k+1);
        bool d=dfs(board,m,n,word,i,j-1,k+1);

        board[i][j]=temp;
        return a || b || c || d;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(), n=board[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(board[i][j]==word[0] && dfs(board,m,n,word,i,j,0)) return true;
        return false;
    }
};