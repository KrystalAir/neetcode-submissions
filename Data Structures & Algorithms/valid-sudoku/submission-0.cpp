class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++){
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++){
                if (board[row][i] == '.')
                    continue;
                if (seen.count(board[row][i]))
                    return false;
                seen.emplace(board[row][i]);
            }
        }

        for (int col = 0; col < 9; col++){
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++){
                if (board[i][col] == '.')
                    continue;
                if (seen.count(board[i][col]))
                    return false;
                seen.emplace(board[i][col]);
            }
        }

        for (int subgrid = 0; subgrid < 9; subgrid++){
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    int row = (subgrid / 3) * 3 + i;
                    int col = (subgrid % 3) * 3 + j;
                    if (board[row][col] == '.')
                        continue;
                    if (seen.count(board[row][col]))
                        return false;
                    seen.emplace(board[row][col]); 
                }
            }
        }

        return true;
    }
};
