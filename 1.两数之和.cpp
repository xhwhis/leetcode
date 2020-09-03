/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(target - nums[i]) != s.end()) {
                ret.push_back(s[target - nums[i]]);
                ret.push_back(i);
                break;
            }
            s[nums[i]] = i;
        }
        return ret;
    }
};
// @lc code=end

