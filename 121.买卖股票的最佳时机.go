/*
 * @lc app=leetcode.cn id=121 lang=golang
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
func maxProfit(prices []int) int {
	ans, minPrice := 0, prices[0]
	for _, price := range prices {
		if minPrice > price {
			minPrice = price
		} else if tmp := price - minPrice; ans < tmp {
			ans = tmp
		}
	}
	return ans
}

// @lc code=end

