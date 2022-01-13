class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int> a;
        for (int i = 0; i < m; i++) {
            a.push_back(nums1.at(i));
        }
        for (int i = 0; i < n; i++) {
            a.push_back(nums2.at(i));
        }
        std::sort(a.begin(), a.end());
        nums1.assign(a.begin(), a.end());
    }
};