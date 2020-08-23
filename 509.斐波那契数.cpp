/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        if (N < 1) return 0;
        int a = 0, b = 1, c;
        for (int i = 2; i <= N; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
// @lc code=end

