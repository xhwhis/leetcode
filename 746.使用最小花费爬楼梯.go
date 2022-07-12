/*
 * @lc app=leetcode.cn id=746 lang=golang
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
func minCostClimbingStairs(cost []int) int {
	min := func(a, b int) int {
		if a < b {
			return a
		}
		return b
	}

	a, b := 0, 0
	for i := 2; i <= len(cost); i++ {
		a, b = b, min(a+cost[i-2], b+cost[i-1])
	}
	return b
}

// @lc code=end

