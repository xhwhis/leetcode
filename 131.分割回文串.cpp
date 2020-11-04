/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> ans;
    bool isPalindrome(string s, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
    void backtrack(string s, int depth, vector<string>& val) {
        if (depth >= s.size()) {
            ans.push_back(val);
            return ;
        }
        for (int i = depth; i < s.size(); i++) {
            if (!isPalindrome(s, depth, i)) continue;
            val.push_back(s.substr(depth, i - depth + 1));
            backtrack(s, i + 1, val);
            val.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> val;
        backtrack(s, 0, val);
        return ans;
    }
};
// @lc code=end

