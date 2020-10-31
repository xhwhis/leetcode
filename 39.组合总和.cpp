/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& candidates, int target, int depth, vector<int>& val) {
        if (depth >= candidates.size()) {
            return ;
        }
        if (target == 0) {
            ans.push_back(val);
            return ;
        }
        if (target >= candidates[depth]) {
            val.push_back(candidates[depth]);
            backtrack(candidates, target - candidates[depth], depth, val);
            val.pop_back();
        }
        backtrack(candidates, target, depth + 1, val);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> val;
        backtrack(candidates, target, 0, val);
        return ans;
    }
};
// @lc code=end

