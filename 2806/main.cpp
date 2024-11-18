#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
  int accountBalanceAfterPurchase(int purchaseAmount) {
    // for n in [0, 10]
    // if (10n - purchaseAmount < 0) continue
    // elif (10n - purchaseAmount <= 5) roundedAmount = 10n
    // else roundedAmount = 10(n-1)
    
    int roundedAmount;

    for (int i = 1; i <= 10; i++) {
      int remainder = (10 * i) - purchaseAmount;
      if(remainder < 0) {
        continue;
      }
      else if(remainder <= 5) {
        roundedAmount = 10 * i;
        break;
      }
      else {
        roundedAmount = 10 * (i - 1);
        break;
      }
    }
    return 100 - roundedAmount;
  }
};
