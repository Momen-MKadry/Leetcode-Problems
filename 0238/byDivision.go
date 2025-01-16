func productExceptSelf(nums []int) []int {
  oneZero := false
  oneZeroIndex := -1
  moreZeros := false

  mul := 1

  for i, val := range nums {
    if val == 0{
      if !oneZero {
        oneZero = true
        oneZeroIndex = i
      } else if oneZero && !moreZeros {
        moreZeros = true
      }
      continue
    } 
    mul *= val
  }
  if moreZeros{
    return make([]int, len(nums))
  }

  for i:=0;i< len(nums);i++{
    if oneZero && i != oneZeroIndex{
      nums[i] = 0
    } else if oneZero && i == oneZeroIndex {
      nums[i] = mul
    } else !oneZero {
      nums[i] = mul / nums[i]
    }
  }

  return nums
}
