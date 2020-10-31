/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    int cnt_l = 0, cnt_r = 0;
    vector<string> res;
    void backtrack(int n, int depth, string str) {
        if (depth >= n * 2) {
            res.push_back(str);
            return ;
        }
        cnt_l++;
        if (cnt_l <= n) {
            str.push_back('(');
            backtrack(n, depth + 1, str);
            cnt_l--;
            str.pop_back();
        } else {
            cnt_l--;
        }
        cnt_r++;
        if (cnt_r <= cnt_l) {
            str.push_back(')');
            backtrack(n, depth + 1, str);
            cnt_r--;
            str.pop_back();
        } else {
            cnt_r--;
        }
    }
    vector<string> generateParenthesis(int n) {
        backtrack(n, 0, "");
        return res;
    }
};
// @lc code=end

