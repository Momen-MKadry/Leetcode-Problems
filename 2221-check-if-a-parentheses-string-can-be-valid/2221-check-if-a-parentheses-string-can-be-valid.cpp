class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.length() % 2)
            return false;

        if ((s[0] == ')' && locked[0] == '1') ||
            (s[s.size() - 1] == '(' && locked[s.size() - 1] == '1'))
            return false;

        int free = 0, lockRight = 0, lockLeft = 0;
        for (int i = 0; i < s.size(); ++i) {

            if (locked[i] == '0')
                ++free;

            if (locked[i] == '1' && s[i] == ')')
                ++lockRight;
            if (locked[i] == '1' && s[i] == '(')
                ++lockLeft;

            if (lockRight > free+lockLeft)
                return false;
        }

        free = 0;
        lockRight = 0;
        lockLeft = 0;
        for (int i = s.size(); i >= 0; --i) {
            if (locked[i] == '0')
                ++free;

            if (locked[i] == '1' && s[i] == ')')
                ++lockRight;
            if (locked[i] == '1' && s[i] == '(')
                ++lockLeft;

            if (lockLeft > free+lockRight)
                return false;
        }
        return true;
    }
};