/*
 * @lc app=leetcode.cn id=70 lang=golang
 *
 * [70] 爬楼梯
 */

// @lc code=start
func climbStairs(n int) int {
	var a, b, c = 1, 2, 3
	for i := 1; i < n; i++ {
		c = a + b
		a = b
		b = c
	}
	return a
}
// @lc code=end

