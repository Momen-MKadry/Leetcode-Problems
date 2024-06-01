public class Solution {
    public int SubtractProductAndSum(int n)
    {
        int result = 0;
        string number = n.ToString();
        int product = 1;
        foreach (var num in number)
            product *= int.Parse(num.ToString());
        
        int sum = 0;
        foreach (var num in number)
            sum += int.Parse(num.ToString());
        
        
        result = product - sum;
        return result;
    }
}