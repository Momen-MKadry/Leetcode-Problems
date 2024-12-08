#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int w1l = word1.length();
    int w2l = word2.length();
    string maxWord = word2, minWord = word1;
    int minL = w1l;
    string result = "";
    int total = w1l + w2l;

    if (w1l > w2l) {
      minL = w2l;
      minWord = word2;
      maxWord = word1;
    }

    int k = 0;

    for (int i = 0; i < minL*2; i += 2) {
      result += word1[k];
      result += word2[k];
      cout << "W1: " << word1[k] << " W2: " << word2[k] << endl;
      k++;
      // cout << result << endl;
    }

    maxWord.erase(0, k);
    // cout << maxWord << endl;
    if(maxWord.length())
      result += maxWord;
    return result;
  }
};

int main() {
  Solution s;
  cout << s.mergeAlternately("ab", "pqrs");
}
