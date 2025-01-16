package main

func canPlaceFlowers(flowerbed []int, n int) bool {
  if len(flowerbed) == 0{
    return false
  }

  if len(flowerbed) == 1{
    if (flowerbed[0] == 0 && n == 0) || (flowerbed[0] == 0 && n == 1) || (flowerbed[0] == 1 && n == 0){
      return true
    } else {
      return false
    }
  }

	for i := 0; i < len(flowerbed); i++ {
		if i == 0 {
			if flowerbed[i] == 0 && flowerbed[i+1] == 0 {
				flowerbed[i] = 1
				n--
			}
		} else if i == len(flowerbed)-1 {
			if flowerbed[i-1] == 0 && flowerbed[i] == 0 {
				flowerbed[i] = 1
				n--
			}
		} else {
			if flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0 {
				flowerbed[i] = 1
				n--
			}
		}
	}
	if n == 0 {
		return true
	} else {
		return false
	}
}
