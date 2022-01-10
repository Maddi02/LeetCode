class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
              int counter = 0;
        std::vector<int> a;
        a.reserve(nums.size());
        for (auto &in: nums) {
            for (int i = 0; i < nums.size(); i++) {
                if (in > nums.at(i)) {
                    counter++;
                }
                if (i == nums.size() - 1) {
                    a.push_back(counter);
                    counter = 0;
                }
            }
        }
        return a;  
    }
};