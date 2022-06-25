/*
 * @lc app=leetcode.cn id=263 lang=golang
 *
 * [263] 丑数
 */

// @lc code=start
func isUgly(n int) bool {
	if n <= 0 {
		return false
	}
	for n % 2 == 0 {
		n /= 2
	}
	for n % 3 == 0 {
		n /= 3
	}
	for n % 5 == 0 {
		n /= 5
	}
	return n == 1
}
// @lc code=end

