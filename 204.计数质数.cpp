/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime(n + 5, 0);
        for (int i = 2; i < n; i++) {
            if (!prime[i]) prime[++prime[0]] = i;
            for (int j = 1; j <= prime[0]; j++) {
                if (i * prime[j] > n) break;
                prime[i * prime[j]] = 1;
                if (i % prime[j] == 0) break;
            }
        }
        return prime[0];
    }
};
// @lc code=end

