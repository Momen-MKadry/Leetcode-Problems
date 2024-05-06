public class Main {
    public static void main(String[] args) {
        //TIP Press <shortcut actionId="ShowIntentionActions"/> with your caret at the highlighted text
        // to see how IntelliJ IDEA suggests fixing it.
        //System.out.printf("Hello and welcome!");

        Solution s = new Solution();
        int[] nums = {1, 2, 3, 4};
        int[] res = s.runningSum(nums);

        for (int re : res) System.out.println(re);
    }
}