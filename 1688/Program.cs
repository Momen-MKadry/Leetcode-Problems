public class Solution {
    public int NumberOfMatches(int n) {
        int result = 0;
        while(n > 1)
        {
            if(n % 2 == 1) 
                result += (n / 2 + 1);
            else result += (n / 2);
            
            n /= 2;
        }
        return result;
    }
}