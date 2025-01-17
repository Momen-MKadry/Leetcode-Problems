class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xord = 0;
        for (auto i : derived) {
            xord ^= i;
        }
        if (xord == 0)
            return true;
        else
            return false;
    }
};