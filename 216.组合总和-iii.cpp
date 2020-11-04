/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int k, int n, int depth, vector<int>& val) {
        if (k == 0 && n == 0) {
            ans.push_back(val);
            return ;
        }
        if (k <= 0 || n <= 0 || depth > 9) return ;
        for (int i = depth; i <= 9; i++) {
            val.push_back(i);
            backtrack(k - 1, n - i, i + 1, val);
            val.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> val;
        backtrack(k, n, 1, val);
        return ans;
    }
};
// @lc code=end

