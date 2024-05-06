#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        int size = s.size();
        //cout << size << endl;
        char hash  = '#';
        string result = "";
        char arr[27];
        char start = 'a';
        for (int i = 1; i <= 26; i++) {
            arr[i] = start;
            start++;
        }

        for (int i = size - 1; i >= 0; i--) {
            //cout << s[i];
            if(s[i] == hash) {
                string data = "";
                data += s[i-2];
                data += s[i-1];
                //cout << data << endl;
                result += arr[stoi(data)];
                i -= 2;
            } else {
                //cout << "NOT HASH" << endl;
                result += arr[s[i] - '0'];
            }
        }
        reverse(result.begin(), result.end());
        return result;
        //cout << result << endl;
        //cout << endl;
    }
};

int main() {
    Solution* s = new Solution();

    string x = "1326#";

    string res = s->freqAlphabets(x);
    cout << res << endl;
}