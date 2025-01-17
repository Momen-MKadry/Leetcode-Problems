class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);

        set<int> n1;
        set<int> n2;

        for (auto i : nums1) {
            n1.insert(i);
        }
        for (auto i : nums2) {
            n2.insert(i);
        }

        for (auto i : n1) {
            if (n2.find(i) == n2.end())
                answer[0].push_back(i);
        }

        for (auto i : n2) {
            if (n1.find(i) == n1.end())
                answer[1].push_back(i);
        }

        return answer;
    }
};