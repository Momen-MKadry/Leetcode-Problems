class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
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