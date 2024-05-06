class Solution {
    public int maximumWealth(int[][] accounts) {
        int richest = -1;
        int cnt = 0;

        for(int i = 0; i < accounts.length; i++)
        {
            cnt = 0;
            for(int j = 0; j < accounts[i].length; j++)
            {
                cnt += accounts[i][j];
            }
            if(cnt > richest)
                richest = cnt;
        }
        return richest;
    }
}