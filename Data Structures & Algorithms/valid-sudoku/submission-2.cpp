class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> numbers;
            //numbers.insert(board[i][0]);
            for (int j = 0; j < 9; ++j) {
                if(board[i][j] == '.'){
                    continue;
                }
                if(numbers.contains(board[i][j])){
                    return false;
                }
                numbers.insert(board[i][j]);
            }
        }

        for (int j = 0; j < 9; ++j) { 
            unordered_set<char> numbers;
            //numbers.insert(board[0][j]);
            for (int i = 0; i < 9; ++i) { 
                if(board[i][j] == '.'){
                    continue;
                }
                if(numbers.contains(board[i][j])){
                    return false;
                }
                numbers.insert(board[i][j]);
            }
        }

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
        for (int boxCol = 0; boxCol < 9; boxCol += 3) {
            unordered_set<char> numbers;
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    char current = board[boxRow + i][boxCol + j];
                    if (current == '.') continue;
                    
                    if (numbers.contains(current)) {
                        return false;
                    }
                    numbers.insert(current);
                }
            }
        }
    }

        return true;
    }
};

/*

[
[".",".",".","9",".",".",".",".","."],
[".",".",".",".",".",".",".",".","."],
[".",".","3",".",".",".",".",".","1"],
[".",".",".",".",".",".",".",".","."],
["1",".",".",".",".",".","3",".","."],
[".",".",".",".","2",".","6",".","."],
[".","9",".",".",".",".",".","7","."],
[".",".",".",".",".",".",".",".","."],
["8",".",".","8",".",".",".",".","."]] */


