package main

import "strconv"
func countSeniors(details []string) int {
  cnt := 0
  for _,id := range details{
    age := id[11:13]

    i, err := strconv.Atoi(age)
    if err != nil{
      panic(err)
    }
    println(i)
    if i > 60{
      cnt++
    }
  }
  return cnt
}

func main(){
  details := []string{"7868190130M7522","5303914400F9211","9273338290F4010"}
  countSeniors(details)
}
