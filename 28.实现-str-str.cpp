/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = needle.size(), n = haystack.size();
        if (l == 0) return 0;
        int pn = 0;
        while (pn < n - l + 1) {
            while (pn < n - l + 1 && haystack[pn] != needle[0]) pn++;
            int len = 0, pl = 0;
            while (pl < l && pn < n && haystack[pn] == needle[pl]) {
                pn++, pl++, len++;
            }
            if (len == l) return pn - l;
            pn = pn - len + 1;
        }
        return -1;
    }
};
// @lc code=end

