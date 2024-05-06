class Solution {
public:
    string toLowerCase(string s) {
        string res;

        for (auto element: s) {
            if (element <= 'Z' && element >= 'A')
                element += 32;
            res += element;
        }
        return res;
    }
};