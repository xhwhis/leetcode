/*
 * @lc app=leetcode.cn id=1103 lang=cpp
 *
 * [1103] 分糖果 II
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int p = sqrt((candies << 1) + 0.25) - 0.5;
        int remaining = candies - ((p + 1) * p >> 1);
        int rows = p / num_people, cols = p % num_people;
        for (int i = 0; i < num_people; i++) {
            ans[i] = rows * (i + 1) + (rows * (rows - 1) >> 1) * num_people;
            if (i < cols) ans[i] += i + 1 + rows * num_people;
        }
        ans[cols] += remaining;
        return ans;
    }
};
// @lc code=end

