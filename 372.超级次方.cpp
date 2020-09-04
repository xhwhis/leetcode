/*
 * @lc app=leetcode.cn id=372 lang=cpp
 *
 * [372] 超级次方
 */

// @lc code=start
class Solution {
public:
    int qucikPow(int a, int k) {
        if (k == 0) return 1;
        if (k % 2) {
            int sub = qucikPow(a, (k - 1) / 2);
            return (((a * sub) % 1337 * sub) % 1337);
        } else {
            int sub = qucikPow(a, k / 2);
            return (sub * sub) % 1337;
        }
    }
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        a %= 1337;
        int last = b.back();
        b.pop_back();
        return ((qucikPow(a, last) * qucikPow(superPow(a, b), 10) % 1337));
    }
};
// @lc code=end

