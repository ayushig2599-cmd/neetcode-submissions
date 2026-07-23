class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue; 
                int val = board[i][j] - '1'; 
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (rows[i][val] || cols[j][val] || boxes[boxIndex][val]) {
                    return false;
                }
                rows[i][val] = true;
                cols[j][val] = true;
                boxes[boxIndex][val] = true;
            }
        }
        return true;
    }
};