/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1, right = nums.size() - 1, sum;
            while (left < right) {
                int lnum = nums[left], rnum = nums[right];
                sum = nums[i] + lnum + rnum;
                if (sum == 0) {
                    ans.push_back({nums[i], lnum, rnum});
                    while (left < right && nums[left] == lnum) left++;
                    while (left < right && nums[right] == rnum) right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
            while (i < nums.size() - 1 && nums[i + 1] == nums[i]) i++;
        }
        return ans;
    }
};
// @lc code=end

