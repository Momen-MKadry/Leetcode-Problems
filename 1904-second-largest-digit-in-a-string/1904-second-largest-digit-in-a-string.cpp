class Solution {
public:
  int secondHighest(string s) {
    set<char> str;
    set<int> nums;
    for (auto ch : s) {
      // cout << ch << endl;
      if (isdigit(ch))
        nums.insert(ch);
    }
    // for (auto ch : nums)
    //   cout << ch << " ";
    // cout << endl;
    auto itr = nums.rbegin();
    // cout << *itr - '0' << endl;
    // cout << *++itr - '0' << endl;
    if (nums.size() <= 1)
      return -1;
    else
      return (*++itr - '0');
  }
};