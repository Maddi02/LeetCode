class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         nums.emplace_back(target);
        std::sort(nums.begin(), nums.end());
        auto in = std::find(nums.begin(), nums.end(), target);
        return std::distance(nums.begin(),in); 
    }
};