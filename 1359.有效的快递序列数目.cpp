/*
 * @lc app=leetcode.cn id=1359 lang=cpp
 *
 * [1359] 有效的快递序列数目
 */

// @lc code=start
class Solution {
public:
    int countOrders(int n) {
        long long mod = 1e9 + 7, ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * i % mod;
            ans = ans * (2 * i - 1) % mod;
        }
        return ans;
    }
};
// @lc code=end

