
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //TIP Press <shortcut actionId="ShowIntentionActions"/> with your caret at the highlighted text
        // to see how IntelliJ IDEA suggests fixing it.

        Solution s = new Solution();
        int count = 0;
        int[][] accounts = new int[3][3];
        for(int i = 0; i < accounts.length; i++)
            for (int j = 0; j < accounts[i].length; j++)
                accounts[i][j] = count++;


        System.out.println(s.maximumWealth(accounts));
    }
}