/*
 * @lc app=leetcode.cn id=198 lang=golang
 *
 * [198] 打家劫舍
 */

// @lc code=start
func rob(nums []int) int {
	max := func(a, b int) int {
		if a > b {
			return a
		}
		return b
	}

	a, b := 0, nums[0]
	for i := 1; i < len(nums); i++ {
		a, b = b, max(a+nums[i], b)
	}
	return b
}

// @lc code=end

