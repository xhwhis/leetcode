/*
 * @lc app=leetcode.cn id=1496 lang=cpp
 *
 * [1496] 判断路径是否相交
 */

// @lc code=start
class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, int> flag;
        int x = 0, y = 0;
        flag[{x, y}]++;
        for (char ch : path) {
            if (ch == 'N') y++;
            else if (ch == 'S') y--;
            else if (ch == 'E') x++;
            else if (ch == 'W') x--;
            if (flag.count({x, y}) > 0) return true;
            flag[{x, y}]++;
        }
        return false;
    }
};
// @lc code=end

