/*
 * @lc app=leetcode.cn id=70 lang=golang
 *
 * [70] 爬楼梯
 */

// @lc code=start
func climbStairs(n int) int {
	a, b := 1, 2
	for i := 1; i < n; i++ {
		a, b = b, a+b
	}
	return a
}

// @lc code=end

