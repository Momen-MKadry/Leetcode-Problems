import java.util.ArrayList;
import java.util.List;

class Solution {
    boolean divBy(int n, int div)
    {
        return n % div == 0;
    }
    public List<String> fizzBuzz(int n) {
        List<String> list = new ArrayList<String>(n + 1);

        for(int i = 1; i <= n; i++)
        {
            if(divBy(i, 3) && divBy(i, 5))
                    list.add(new String("FizzBuzz"));
            else if (divBy(i, 5))
                list.add(new String("Buzz"));
            else if (divBy(i, 3))
                list.add(new String("Fizz"));
            else
                list.add(String.valueOf(i));
        }
        return list;
    }
}