package main

func productExceptSelf(nums []int) []int {
	result := make([]int, len(nums))

	pre := make([]int, len(nums))
	for i := 1; i < len(nums); i++ {
		if i == 1 {
			pre[i] = nums[0]
		} else {
			pre[i] = pre[i-1] * nums[i-1]
		}
	}

	post := make([]int, len(nums))
	for i := len(nums) - 2; i >= 0; i-- {
		if i == len(nums)-2 {
			post[i] = nums[len(nums)-1]
		} else {
			post[i] = post[i+1] * nums[i+1]
		}
	}
	// for _, val := range post {
	// 	print(val, "-")
	// }
	// println()

	for i := 0; i < len(nums); i++ {
		result[i] = pre[i] * post[i]
	}

	result[0] = post[0]
	result[len(nums)-1] = pre[len(nums)-1]

	// for _, val := range result {
	// 	print(val, " ")
	// }
	return result
}

func main() {
	arr := []int{1, 2, 3, 4}
	productExceptSelf(arr)
}
