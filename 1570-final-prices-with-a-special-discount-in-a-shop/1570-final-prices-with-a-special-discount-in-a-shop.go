func finalPrices(prices []int) []int {
	for i := 0; i < len(prices)-1; i++ {
		minPrice := 9999
		for j := i + 1; j < len(prices); j++ {
			if prices[j] <= minPrice && prices[j] <= prices[i] {
				minPrice = prices[j]
				break
			}
		}
		if minPrice == 9999 {
			minPrice = 0
		}
		prices[i] -= minPrice
	}
	return prices
}
