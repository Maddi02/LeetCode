class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
                std::vector<int> a;
        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size()) {
                for (int j = 0; j < nums.at(i); j++) {
                    a.push_back(nums.at(i + 1));
                }
                i++;
            }
        }
        return a;
    }
};