class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int id = logs[0][0];
        int firstTime = logs[0][1];
        int max = firstTime;

        for(int i = 0; i < logs.size() - 1; i++) {
            vector<int> currentStamp = logs[i];
            vector<int> nextStamp = logs[i + 1];

            //for(int j = 0; j < 2; j++) {
                int time = nextStamp[1] - currentStamp[1]; 
                if(time > max) {
                    max = time;
                    id = nextStamp[0];
                }
                if(time == max) {
                    id = min(id, nextStamp[0]);
                }
            //}
        }

        return id;
    }
};