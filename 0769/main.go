package main

func maxChunksToSorted(arr []int) int {
	chunk := 0
	sumArr := 0
	sumIndex := 0

	for i := 0; i < len(arr); i++ {
		sumArr += arr[i]
		sumIndex += i

		if sumArr == sumIndex {
			chunk++
		}
	}
	return chunk
}
