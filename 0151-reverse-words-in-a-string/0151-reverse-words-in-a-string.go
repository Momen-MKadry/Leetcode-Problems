func reverseWords(s string) string {
	var words []string
	var currentWord strings.Builder

	for _, char := range s {
		if char == ' ' && currentWord.Len() > 0 {
			words = append(words, currentWord.String())
			currentWord.Reset()
		} else if char != ' ' {
			currentWord.WriteRune(char)
		}
	}

	if currentWord.Len() > 0 {
		words = append(words, currentWord.String())
	}

	for i, j := 0, len(words)-1; i < j; i, j = i+1, j-1 {
		words[i], words[j] = words[j], words[i]
	}

	return strings.Join(words, " ")

	// return string(runes)
}