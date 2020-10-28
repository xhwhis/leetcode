/*
 * @lc app=leetcode.cn id=137 lang=cpp
 *
 * [137] 只出现一次的数字 II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num_once = 0, num_twice = 0;
        for (int num : nums) {
            num_once = ~num_twice & (num_once ^ num);
            num_twice = ~num_once & (num_twice ^ num);
        }
        return num_once;
    }
};
// @lc code=end

