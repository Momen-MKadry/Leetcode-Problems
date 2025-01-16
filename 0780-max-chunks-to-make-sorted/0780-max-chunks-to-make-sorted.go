func maxChunksToSorted(arr []int) int {
	chunk := 0
	maxTillNow := 0

	for i := 0; i < len(arr); i++ {
        if arr[i] > maxTillNow {
            maxTillNow = arr[i]
        }
        if maxTillNow == i {
            chunk++
        }
	}
	return chunk
}
