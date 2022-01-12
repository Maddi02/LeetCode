class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
                std::sort(nums.begin(), nums.end());
        return (nums.at(nums.size() - 1) * nums.at(nums.size() - 2)) - (nums.at(1) * nums.at(0));
    }
};