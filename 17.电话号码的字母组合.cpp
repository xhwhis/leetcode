/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    string val[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    void backtrack(string digits, int depth, string str) {
        if (depth >= digits.size()) {
            if (str == "") return ;
            res.push_back(str);
            return ;
        }
        for (auto ch : val[digits[depth] - '0' - 2]) {
            str.push_back(ch);
            backtrack(digits, depth + 1, str);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        backtrack(digits, 0, "");
        return res;
    }
};
// @lc code=end

