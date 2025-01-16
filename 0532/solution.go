package main

import (
	"fmt"
	"math"
)

func findPairs(nums []int, k int) int {

	pairs := make(map[int][]int)

	result := 0
	if k < 0 {
		return 0
	}

	for i := 0; i < len(nums); i++ {
		for j := 1; j < len(nums); j++ {

			fmt.Println("i: ", i, "j: ", j, "nums[i]: ", nums[i], "nums[j]: ", nums[j])

			if i != j && math.Abs(float64(nums[i]-nums[j])) == float64(k) {
				if pairs[nums[i]] == nil {
					pairs[nums[i]] = []int{}
				}
				if pairs[nums[j]] == nil {
					pairs[nums[j]] = []int{}
				}

				found := false
				for _, v := range pairs[nums[i]] {
					if v == nums[j] {
						found = true
						break
					}
				}
				if found {
					continue
				}

				pairs[nums[i]] = append(pairs[nums[i]], nums[j])
				pairs[nums[j]] = append(pairs[nums[j]], nums[i])
				result++

			}
		}
	}

	return result
}
