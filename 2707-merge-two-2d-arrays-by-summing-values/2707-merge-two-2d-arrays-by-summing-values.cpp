class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i = 0, j = 0;
        vector<vector<int>> result;
        while((i < nums1.size()) && (j < nums2.size())) {
            if(nums1[i][0] == nums2[j][0]) {
                nums1[i][1] += nums2[j][1];
                result.push_back(nums1[i]);
                ++i; ++j;
            } else {
                if (nums1[i][0] < nums2[j][0]) {
                    result.push_back(nums1[i]);
                    ++i;
                } else {
                    result.push_back(nums2[j]);
                    ++j;
                }
            }
        }

        for(i; i < nums1.size();++i)
            result.push_back(nums1[i]);
        for(j; j < nums2.size();++j)
            result.push_back(nums2[j]);
        return result;
    }
};