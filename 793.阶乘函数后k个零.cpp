/*
 * @lc app=leetcode.cn id=793 lang=cpp
 *
 * [793] 阶乘函数后K个零
 */

// @lc code=start
class Solution {
public:
    int get_cnt(long long x) {
        int cnt = 0;
        while (x >= 5) {
            cnt += x / 5;
            x /= 5;
        }
        return cnt;
    }
    int preimageSizeFZF(long long K) {
        long long left = K, right = K * 5 + 1, mid;
        while (left < right) {
            mid = left + (right - left) / 2;
            int cnt = get_cnt(mid);
            if (cnt == K) return 5;
            else if (cnt < K) left = mid + 1;
            else right = mid;
        }
        return 0;
    }
};
// @lc code=end

