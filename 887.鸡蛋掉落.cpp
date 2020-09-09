/*
 * @lc app=leetcode.cn id=887 lang=cpp
 *
 * [887] 鸡蛋掉落
 */

// @lc code=start
class Solution {
public:
    unordered_map<int, int> memo;
    int dp(int K, int N) {
        if (memo.find(K + N * 100) == memo.end()) {
            int ans;
            if (K == 1) ans = N;
            else if (N == 0) ans = 0;
            else {
                int left = 1, right = N, mid;
                while (left + 1 < right) {
                    mid = (left + right) / 2;
                    int low = dp(K - 1, mid - 1);
                    int high = dp(K, N - mid);
                    if (low < high) left = mid;
                    else if (low > high) right = mid;
                    else left = right = mid;
                }
                ans = min(max(dp(K - 1, left - 1), dp(K, N - left)), max(dp(K - 1, right - 1), dp(K, N - right))) + 1;
            }
            memo[K + N * 100] = ans;
        }
        return memo[K + N * 100];
    }
    int superEggDrop(int K, int N) {
        return dp(K, N);
    }
};
// @lc code=end

