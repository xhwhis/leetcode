/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int rev = 0, tmp = x;
        while (tmp) {
            if (rev > INT_MAX / 10) return false;
            rev = rev * 10 + tmp % 10;
            tmp /= 10;
        }
        return rev == x;
    }
};
// @lc code=end

