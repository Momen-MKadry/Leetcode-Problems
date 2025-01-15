class Solution {
public:
  int minimizeXor(int num1, int num2) {
    bitset<32> first(num1);
    bitset<32> second(num2);
    bitset<32> result(0);

    int n1set = first.count();
    int n2set = second.count();

    if (n1set == n2set)
      return num1;

    for (int i = 31; i >= 0; --i) {
      if (first[i] == 1 && n2set > 0) {
        result[i] = 1;
        --n2set;
      }
    }

    int index = 0;
    while (n2set > 0) {
      if (first[index] == 0) {
        result[index] = 1;
        --n2set;
      }
      ++index;
    }

    return result.to_ulong();
  }
};
