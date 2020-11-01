/*
 * @lc app=leetcode.cn id=89 lang=cpp
 *
 * [89] 格雷编码
 */

// @lc code=start
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        for (int i = 0; i < (1 << n); i++) {
            ans.push_back(i ^ (i >> 1));
        }
        return ans;
    }
};
// @lc code=end

