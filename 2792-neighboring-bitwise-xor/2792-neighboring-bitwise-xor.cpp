class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        vector<int> original;
        int size = derived.size();
        original.push_back(0);

        for (int i = 0; i < size; ++i) {
            if (i == size - 1) {
                if (original[i] ^ original[0] == derived[i])
                    return true;
            }
            original.push_back(derived[i] ^ original[i]);
        }
        original.clear();
        original.push_back(1);

        for (int i = 0; i < size; ++i) {
            if (i == size - 1) {
                if (original[i] ^ original[0] == derived[i])
                    return true;
            }
            original.push_back(derived[i] ^ original[i]);
        }

        return false;
    }
};