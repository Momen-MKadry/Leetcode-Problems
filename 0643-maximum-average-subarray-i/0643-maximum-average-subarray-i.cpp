class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg, sum = 0;
        for(int i = 0;i < k; i++){
            sum += nums[i];
        }
        maxAvg = (double)sum / (double)k;

        for(int i = 1; i < nums.size()-k+1; i++) {
            //cout << nums[i-1] << " "<< nums[i + k-1] << endl;
            sum -= nums[i-1];
            sum += nums[i + k-1];
            maxAvg = max(maxAvg, (double)sum / (double)k);
        }
        return maxAvg;
    }
};