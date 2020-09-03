/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char ch : moves) {
            if (ch == 'R') x++;
            else if (ch == 'L') x--;
            else if (ch == 'U') y++;
            else if (ch == 'D') y--;
        }
        return (x == 0 && y == 0);
    }
};
// @lc code=end

