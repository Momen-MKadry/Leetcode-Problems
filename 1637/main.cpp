class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxDist = -1;

        std::sort(points.begin(), points.end());


        while
        for (int i = 1; i < points.size(); i++) {
            
            if(points[i][0] - points[i-1][0] > maxDist)
                maxDist = points[i][0] - points[i-1][0];
        }
        return maxDist;
    }
};
