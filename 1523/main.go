func countOdds(low int, high int) int{
  // if low is even and high is even, oddCnt = (high - low) / 2
  // elif low is odd and high is odd, oddCnt = 
  // 2, 8 -> [2, 3, 4, 5, 6, 7, 8]
  // 5, 9 -> [5, 6, 7, 8, 9]
  // 2, 7 -> [2, 3, 4, 5, 6, 7]

  // if high - low + 1 -> even, oddCnt = (h - l + 1) / 2
  // else, if high and low are even, oddCnt = (h - l) / 2
  //       elif high and low are odd, oddCnt = ((h - l) / 2) + 1
  
  var oddCnt int

  if (high - low + 1) % 2 == 0 {
    oddCnt = (high - low + 1) / 2;
  } else {
    if high % 2 == 0 && low % 2 == 0 {
      oddCnt = (high - low) / 2
    } else {
      oddCnt = ((high - low) / 2) + 1
    }
  }
  return oddCnt
}
