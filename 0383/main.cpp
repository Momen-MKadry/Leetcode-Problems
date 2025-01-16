#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt = 0;
        for(char c : magazine)
        {

            bool found = false;
            for(char x : ransomNote)
            {
                if(x == c)
                {
                cnt++;
                found = true;
                break;
                }
            }
            if(!found) break;
            }
            if(cnt == ransomNote.size())
                return true;
            else
                return false;
        }
    };
