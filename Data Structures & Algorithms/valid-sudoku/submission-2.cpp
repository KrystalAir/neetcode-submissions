class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> subgrids(9);

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                char current = board[i][j];
                if (current == '.') continue;
                int subgrid = (i / 3) * 3 + (j / 3);
                if (rows[i].contains(current) || 
                    cols[j].contains(current) || 
                    subgrids[subgrid].contains(current))
                    return false;
                rows[i].emplace(current);
                cols[j].emplace(current);
                subgrids[subgrid].emplace(current);
            }
        }

        return true;
    }
};