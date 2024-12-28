package main

func reverseVowels(s string) string {
	runes := []rune(s)
	i, j := 0, len(runes)-1

	for i < j {
		if isVowel(runes[i]) && isVowel(runes[j]) {
			runes[i], runes[j] = runes[j], runes[i]
			i++
			j--
		} else {
			if !isVowel(runes[i]) {
				i++
			}
			if !isVowel(runes[j]) {
				j--
			}
		}
	}
	return string(runes)
}

func isVowel(c rune) bool {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
}
