class Solution {
public:
    bool solve(vector<vector<char>>& board, string word,vector<vector<int>> visited,int i,int j ,int k){
        if(k==word.size()){
            return true;
        }
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]!=word[k]||visited[i][j]==1){
            return false;
        }

        visited[i][j]=1;
        bool found=solve(board,word,visited,i+1,j,k+1)||
        solve(board, word, visited, i - 1, j, k + 1) ||
            solve(board, word, visited, i, j + 1, k + 1) ||
            solve(board, word, visited, i, j - 1, k + 1);

            visited[i][j]=0;


            return found;



    }
    bool exist(vector<vector<char>>& board, string word) {
       int m=board.size();
       int n=board[0].size();
       vector<vector<int>>visited(m,vector<int>(n,0));
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(solve(board,word,visited,i,j,0)){
                return true;
            }
        }
       }



      return false;
        
    }
};
