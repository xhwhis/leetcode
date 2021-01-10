/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
class Solution {
public:
    int c[200][200];
    int count(int m, int n) {
        if (n == 0 || m == n) return 1;
        if (c[m][n]) return c[m][n];
        c[m][n] = count(m - 1, n) + count(m - 1, n - 1);
        return c[m][n];
    }
    int uniquePaths(int m, int n) {
        return count(m + n - 2, n - 1);
    }
};
// @lc code=end

