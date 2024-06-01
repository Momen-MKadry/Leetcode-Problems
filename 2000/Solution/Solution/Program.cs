public class Solution {
    public string ReversePrefix(string word, char ch) {
        string tempString = "";
        foreach (var c in word)
        {
            if(c == ch)
                break;
            tempString += c;
        }

        tempString.Reverse();

        for (int i = tempString.Length; i < word.Length; i++)
        {
            tempString += word[i];
        }

        return word;
    }
}