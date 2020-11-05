/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> flags;
        int p = -1, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i) flags.erase(s[i - 1]);
            while (p + 1 < s.size() && !flags.count(s[p + 1])) {
                flags.insert(s[p + 1]);
                ++p;
            }
            ans = max(ans, p - i + 1);
        }
        return ans;
    }
};
// @lc code=end

