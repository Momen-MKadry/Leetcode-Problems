#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        int res = 0;
        while(num > 0) {
            if(num % 2) {
                binary.push_back(0);
            } else {
                binary.push_back(1);
            }
            num /= 2;
        }
        int expo = 0;
        int size = binary.size();
        for(int i = 0; i < size ; i++) {
            //cout << binary[i];
            //cout << binary[i] << "\t" << expo << "\t";
            //cout << res << "\t";
            res += binary[i] * (pow(2, expo));
            //cout << res << endl;
            expo++;
        }
        return res;
    }
};