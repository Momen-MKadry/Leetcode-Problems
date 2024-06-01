public class Solution {
    public int LengthOfLastWord(string s) {
        var punctuation = s.Where(Char.IsPunctuation).Distinct().ToArray();
        var words = s.Split(new char[] {' '}, StringSplitOptions.RemoveEmptyEntries)
            .Select(x => x.Trim(punctuation));

        string lastWord = words.Last();
        return lastWord.Length;
    }
}