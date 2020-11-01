/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
public:
    int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
    bool backtrack(vector<vector<char>>& board, string word, int row, int col, int ind) {
        if (board[row][col] != word[ind]) {
            return false;
        }
        if (ind >= word.size() - 1) {
            return true;
        }
        char tmp = board[row][col];
        board[row][col] = '#';
        ind++;
        for (int i = 0; i < 4; i++) {
            int _row = row + dir[i][0], _col = col + dir[i][1];
            if (_row < 0 || _row >= board.size() || _col < 0 || _col >= board[0].size()) continue;
            if (backtrack(board, word, _row, _col, ind)) return true;
        }
        board[row][col] = tmp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size(), col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (backtrack(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

