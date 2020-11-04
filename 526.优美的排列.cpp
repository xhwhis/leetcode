/*
 * @lc app=leetcode.cn id=526 lang=cpp
 *
 * [526] 优美的排列
 */

// @lc code=start
class Solution {
public:
    vector<int> flag;
    int ans = 0;
    void backtrack(int n, int depth) {
        if (depth > n) {
            ans++;
            return ;
        }
        for (int i = 1; i <= n; i++) {
            if (flag[i] || ((i % depth) && (depth % i))) continue;
            flag[i]++;
            backtrack(n, depth + 1);
            flag[i]--;
        }
    }
    int countArrangement(int N) {
        flag.resize(N + 1, 0);
        backtrack(N, 1);
        return ans;
    }
};
// @lc code=end

