package main

import "fmt"

func mergeAlternately(word1 string, word2 string) string {

	word1Slice := []byte(word1)
	word2Slice := []byte(word2)
	word1Length := len(word1)
	word2Length := len(word2)
    minLength := word1Length
    maxWord := word2Slice
    result := ""

    if word1Length > word2Length {
        maxWord = word1Slice
        minLength = word2Length
    }

    k := 0

    for i := 0; i < minLength*2; i+=2{
        result += string(word1Slice[k])
        result += string(word2Slice[k])
        k++
    }
    maxWord = maxWord[k:]
    result += string(maxWord)

    return result

}

func main() {
	// result := mergeAlternately("ab", "wxyz")
	// fmt.Println(result)
	// result1 := mergeAlternately("abc", "xyz")
	// fmt.Println(result1)
	result2 := mergeAlternately("abcd", "pq")
	fmt.Println(result2)
}
