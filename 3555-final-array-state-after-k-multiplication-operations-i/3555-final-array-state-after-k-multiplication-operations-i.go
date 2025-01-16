func getFinalState(nums []int, k int, multiplier int) []int {
	for i := 0; i < k; i++ {
		minElement := 9223372036854775807
		index := 0
		for j := 0; j < len(nums); j++ {
			if nums[j] < minElement {
                minElement = nums[j]
				index = j
			}
		}
        nums[index] *= multiplier
	}
	return nums
}