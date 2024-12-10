class Solution {
public:
  int fib(int n) {
    int result = 0;
    int fibon[n + 1];
    fibon[0] = 0;
    if (n > 0)
      fibon[1] = 1;

    for (int i = 2; i <= n; i++) {
      fibon[i] = fibon[i - 1] + fibon[i - 2];
    }
    return fibon[n];
  }
};
