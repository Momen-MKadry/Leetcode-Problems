class Solution {
public:
  bool isSubsequence(string s, string t) {
    if(t.size() == 0 && s.size() == 0)
        return true;
    if(s.size() == 0)
        return true;
    if(t.size() == 0)
        return false;
    
    int cnt = 0;
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == s[cnt]) {
        //cout << t[i] << " "<< s[cnt] << " " << cnt << endl;
        
        cnt++;
      }
    }

    if (cnt == s.size())
      return true;
    else
      return false;
  }
};