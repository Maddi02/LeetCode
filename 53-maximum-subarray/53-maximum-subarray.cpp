class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMaxSum = nums[0], currMaxSum = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            currMaxSum = std::max(currMaxSum + nums[ind], nums[ind]);
            globalMaxSum = std::max(globalMaxSum, currMaxSum);
        }
        return globalMaxSum;
    }
};