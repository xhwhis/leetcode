/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int n, int k, int depth, vector<int>& val) {
        if (k <= 0) {
            ans.push_back(val);
            return ;
        }
        if (depth >= n) {
            return ;
        }
        val.push_back(depth + 1);
        backtrack(n, k - 1, depth + 1, val);
        val.pop_back();
        backtrack(n, k, depth + 1, val);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> val;
        backtrack(n, k, 0, val);
        return ans;
    }
};
// @lc code=end

