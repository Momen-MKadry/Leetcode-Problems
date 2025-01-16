import "strconv"
func countSeniors(details []string) int {
  cnt := 0
  for _,id := range details{
    age := id[11:13]

    i, err := strconv.Atoi(age)
    if err != nil{
      panic(err)
    }
    if i > 60{
      cnt++
    }
  }
  return cnt
}
