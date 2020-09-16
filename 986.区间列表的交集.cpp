/*
 * @lc app=leetcode.cn id=986 lang=cpp
 *
 * [986] 区间列表的交集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            int a1 = A[i][0], a2 = A[i][1], b1 = B[j][0], b2 = B[j][1];
            if (a2 >= b1 && a1 <= b2) {
                ans.push_back({max(a1, b1), min(a2, b2)});
            }
            if (a2 < b2) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};
// @lc code=end

