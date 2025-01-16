class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int key = 0;

        for (int i = 0; i < 4; i++) {
            int minNum = (std::min(std::min(((int)(num1 / pow(10, i)) % 10),
                                            ((int)(num2 / pow(10, i)) % 10)),
                                   ((int)(num3 / pow(10, i)) % 10)));
            key += (pow(10, i) * minNum);
        }
        return key;
    }
};
