class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int n) {
 std::unordered_map<int, int> unorderedMap;
        for (int i = 0; i < nums.size(); i++) {
            auto it = unorderedMap.find(n - nums.at(i));
            if (it != unorderedMap.end()) {
                return {(it->second) +1, i+1};
            }
            unorderedMap[nums.at(i)] = i;
        }
        return {};
    }
};