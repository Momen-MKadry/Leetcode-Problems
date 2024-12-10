#include <cmath>
#include <iostream>

using namespace std;

class Solution {
public:
  int generateKey(int num1, int num2, int num3) {
    int key = 0;

    for (int i = 0; i < 4; i++) {
      int minNum =
          (std::min(std::min(((int)(num1/pow(10,i)) % 10), ((int)(num2/pow(10,i)) % 10)),
                    ((int)(num3/pow(10,i))% 10)));
      cout << "N1: " << num1 % (10 * (i + 1)) << " N2: " << num2 % (10 * (i + 1))
           << " N3: " << num3 % (10 * (i + 1)) << " MIN: " << minNum << "\t";
      key += (pow(10, i) * minNum);
      cout << "KEY: " << key << endl;
    }
    return key;
  }
};

int main() {
  Solution s;
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  cout << s.generateKey(n1, n2, n3);
}
