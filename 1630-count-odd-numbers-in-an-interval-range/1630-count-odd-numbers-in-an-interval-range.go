func countOdds(low int, high int) int {
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