public class Solution {
    public string RemoveStars(string s) {
        Stack<char> stk = new Stack<char>();
        for (int i = 0; i < s.Length; ++i)
        {
            if (s[i] == '*')
            {
                stk.Pop();
                continue;
            }
            stk.Push(s[i]);
        }
        var revStk = new Stack<char>(stk);
        
        string res = new string(revStk.ToArray());

        return res;
    }
}
