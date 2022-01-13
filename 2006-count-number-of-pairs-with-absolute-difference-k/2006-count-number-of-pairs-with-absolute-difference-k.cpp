class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
               int counter = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (std::abs(nums.at(i) - nums.at(j)) == k) {
                    counter++;
                }
            }
        }
        return counter; 
    }
};