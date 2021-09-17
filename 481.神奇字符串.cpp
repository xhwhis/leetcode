/*
 * @lc app=leetcode.cn id=481 lang=cpp
 *
 * [481] 神奇字符串
 */

// @lc code=start
class Solution {
public:
    int magicalString(int n) {
        if (n <= 3) return 1;

        string s = "122";
        int pre = 2, ans = 1;
        while (s.size() < n) {
            int cnt = s[pre++] - '0';
            if (s[s.size() - 1] == '1') {
                for (int i = 0; i < cnt; ++i) {
                    s.push_back('2');
                }
            } else {
                for (int i = 0; i < cnt; ++i) {
                    s.push_back('1');
                    ++ans;
                    if (s.size() >= n) return ans;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

