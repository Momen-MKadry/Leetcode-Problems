package main

func kidsWithCandies(candies []int, extraCandies int) []bool {
	maxCandies := -1
	for i := 0; i < len(candies); i++ {
		maxCandies = max(maxCandies, candies[i])
	}

  haveMax := make([]bool, len(candies))
	for i := 0; i < candies[i]; i++ {
		if candies[i]+extraCandies >= maxCandies {
			haveMax[i] = true
		}
	}
  return haveMax
}
