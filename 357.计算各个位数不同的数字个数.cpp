/*
 * @lc app=leetcode.cn id=357 lang=cpp
 *
 * [357] 计算各个位数不同的数字个数
 */

// @lc code=start
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        if (n == 1) return 10;
        if (n > 10) return countNumbersWithUniqueDigits(10);
        return countNumbersWithUniqueDigits(n - 1) * (12 - n) - countNumbersWithUniqueDigits(n - 2) * (11 - n);
    }
};
// @lc code=end

