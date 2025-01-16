class Solution {
public:
    int minimizeXor(int num1, int num2) {
        bitset<30> first(num1);
        bitset<30> second(num2);

        int n1set = first.count();
        int n2set = second.count();

        if (n1set == n2set)
            return num1;

        for(int i = 0; i < 30; ++i)
            second[i] = 0;
        
        for (int i = 29; i >= 0; --i) {
            if (first[i] == 1 && n2set > 0) {
                second[i] = 1;
                --n2set;
            }
        }

        int index = 0;
        while (n2set > 0) {
            if (first[index] == 0) {
                second[index] = 1;
                --n2set;
            }
            ++index;
        }

        return second.to_ulong();
    }
};