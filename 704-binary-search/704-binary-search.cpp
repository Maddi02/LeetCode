class Solution {
public:
    int search(vector<int>& nums, int target) {
                std::sort(nums.begin(), nums.end());
        auto in = std::find(nums.begin(), nums.end(),target);
        if(in == nums.end())
            return -1;
        return std::distance(nums.begin(), in);
    }
};