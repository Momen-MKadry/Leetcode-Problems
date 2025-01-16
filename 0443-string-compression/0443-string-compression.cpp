class Solution {
public:
  int compress(vector<char> &chars) {
    int v = 0, r = 0;

    while (v < chars.size()) {
      int gl = 1;
      while (v + gl < chars.size() && chars[v + gl] == chars[v]) 
        gl++;
    
      chars[r++] = chars[v];
      if (gl > 1) 
        for (auto c : to_string(gl))
          chars[r++] = c;
      
      v += gl;
    }
    return r;
  }
};