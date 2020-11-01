/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 第k个排列
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> fac(n);
        fac[0] = 1;
        for(int i = 1; i < n; i++) {
            fac[i] = fac[i - 1] * i;
        }
        string ans;
        vector<int> val(n + 1, 1);
        k--;
        for (int i = 1; i <= n; i++) {
            int order = k / fac[n - i] + 1;
            for (int j = 1; j <= n; j++) {
                order -= val[j];
                if(!order) {
                    ans += (j + '0');
                    val[j] = 0;
                    break;
                }
            }
            k %= fac[n - i];
        }
        return ans;
    }
};
// @lc code=end

