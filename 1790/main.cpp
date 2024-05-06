#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int size = s1.size();
        int cnt = 0;
        string diff1 = "";
        string diff2 = "";
        for (int i = 0; i < size; i++) {
            if(s1[i] != s2[i]) {
                cnt++;
                diff1 += s1[i];
                diff2 += s2[i];
            }
        }
        sort(diff1.begin(), diff1.end());
        sort(diff2.begin(), diff2.end());

        if((cnt == 2 || cnt == 0) && diff1 == diff2)
            return true;
        else return false;
    }
};